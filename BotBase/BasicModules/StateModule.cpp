#include "StateModule.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/LogManager.h"

void StateModule::doState(bool isFirst) {
    try {
        unsigned int arg = actions.at(state).at(actionPos);
        LogManager::getInstance().log(
                "StateModule: Doing State: " + state + " ActionPos: " + std::to_string(actionPos) + ".", 2);
        clickPoint = Point(point->getParameters().at(arg * 2), point->getParameters().at(arg * 2 + 1));
        actionPos++;
        if (isFirst) {
            new(&clickSecond) Timeout(*this, 2000);
        } else {
            new(&clickFirst) Timeout(*this, 2000);
        }
        if (actionPos == actions.at(state).size()) {
            _isFirst = false;
            new(&error) Timeout(*this, 12000);
        }
    } catch (std::out_of_range &e) {
        return;
    }
}

void StateModule::doOperation(const std::string &argument) {
    try {
        std::string combine = state + " " + argument;
        state = operations.at(combine);
        LogManager::getInstance().log("StateModule: Operation done for Combine: " + combine + ".", 2);
        actionPos = 0;
        if (!_isFirst) {
            error.cancelTimeOut();
        }
        if (state == "End") {
            isWaiting = false;
            uninit();
        } else {
            doState(false);
        }
    } catch (std::out_of_range &e) {
        return;
    }
}

void StateModule::timeoutCallBack(void *caller) {
    if (caller == &clickFirst || caller == &clickSecond) {
        ClickManager::click(clickPoint);
        doState(caller == &clickFirst);
    } else if (caller == &error) {
        new(&clickFirst) Timeout(*this, 2000);
    }
}

void StateModule::dispatcherCallBack(Packet &packet) {
    if (isWaiting) {
        doOperation(ConfigManager::getInstance().getPacketName(packet.getPacketID()));
    }
}

void StateModule::init(WorldPath &path, const MapContextModule &contextModule) {
    LogManager::getInstance().log("StateModule: Init StateModule.", 2);
    point = &path.getPosition();
    isWaiting = true;
    state = "Start";
    _isFirst = true;
    doOperation("Init");
}

void StateModule::addAction(std::string &stateName, std::vector<unsigned int> &actionParams) {
    actions.insert({stateName, actionParams});
}

void StateModule::addOperation(std::string &stateName, std::string &operatorName, std::string &result) {
    std::string combine = stateName + " " + operatorName;
    operations.insert({combine, result});
}

void StateModule::cancel() {
    isWaiting = false;
    clickFirst.cancelTimeOut();
    clickSecond.cancelTimeOut();
    error.cancelTimeOut();
}