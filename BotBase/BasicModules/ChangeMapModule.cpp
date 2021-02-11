#include "ChangeMapModule.h"
#include "../../BotCore/BotException.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/LogManager.h"

void ChangeMapModule::timeoutCallBack(void *caller) {
    if (caller == &click) {
        ClickManager::click(clickPoint);
        new(&error) Timeout(*this, 12000);
    } else if (caller == &error) {
        new(&click) Timeout(*this, 2000);
    }
}

void ChangeMapModule::dispatcherCallBack(Packet &packet) {
    if (isWaiting) {
        if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "CurrentMapMessage") {
            error.cancelTimeOut();
            isWaiting = false;
            LogManager::getInstance().log("ChangeMapModule: End ChangeMapModule.", 2);
            parent.moduleCallBack(this);
        }
    }
}

void ChangeMapModule::init(WorldPath &path, const MapContextModule &contextModule) {
    LogManager::getInstance().log("ChangeMapModule: Init ChangeMapModule.", 2);
    try {
        clickPoint = ConfigManager::getInstance().getScreenPoint(
                contextModule.getContext().getOrientationTo(path.getPosition()));
        LogManager::getInstance().log("ChangeMapModule: Success Init ChangeMapModule.", 2);
    } catch (BotException &e) {
        parent.moduleCallBack(this);
        return;
    }
    isWaiting = true;
    new(&click) Timeout(*this, 2000);
}

void ChangeMapModule::cancel() {
    isWaiting = false;
    click.cancelTimeOut();
    error.cancelTimeOut();
}