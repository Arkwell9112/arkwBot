#include "WorldPathModule.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcher.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/LogManager.h"

void WorldPathModule::init() {
    PacketDispatcher::getInstance().addListener(contextModule);
    json pathObject = ConfigManager::getInstance().getPath();
    path = WorldPath(pathObject);
    path.init();
    isWaiting = true;
}

void WorldPathModule::moduleCallBack(void *child) {
    if (child == &contextModule && isWaiting) {
        if (!isFirst) {
            if (!isPos || ConfigManager::getInstance().getRevive() == contextModule.getContext()) {
                path.setPosition(contextModule.getContext());
                isPos = true;
                auto it = preModules.begin();
                while (it != preModules.end()) {
                    (*it)->cancel();
                    it++;
                }
                auto it2 = postModules.begin();
                while (it2 != postModules.end()) {
                    (*it2)->cancel();
                    it2++;
                }
            }
            LogManager::getInstance().log("WorldPathModule: New MapContext.", 1);
            isWaiting = false;
            preModulePos = 0;
            postModulePos = 0;
            doPreModule();
        } else {
            isFirst = false;
        }
    } else if (child != &contextModule) {
        doPreModule();
    } else if (child == &contextModule && ConfigManager::getInstance().getRevive() == contextModule.getContext()) {
        LogManager::getInstance().log("WorldPathModule: New MapContext at Revive.", 1);
        isWaiting = true;
        moduleCallBack(&contextModule);
        return;
    }
}

void WorldPathModule::doPreModule() {
    LogManager::getInstance().log(
            "WorldPathModule: PreModule Execution at Index: " + std::to_string(preModulePos) + ".", 1);
    if (preModulePos == preModules.size()) {
        if (contextModule.getContext() == path.getPosition()) {
            if (path.isEnd(contextModule.getContext())) {
                LogManager::getInstance().log("WorldPathModule: Path End and Init.", 1);
                path.init();
            }
            LogManager::getInstance().log("WorldPathModule: Path next Position.", 1);
            path.nextPosition();
        }
        doPostModule();
    } else {
        preModules.at(preModulePos++)->init(path, contextModule);
    }
}

void WorldPathModule::doPostModule() {
    LogManager::getInstance().log(
            "WorldPathModule: PostModule Execution at index: " + std::to_string(postModulePos) + ".", 1);
    if (postModulePos == postModules.size()) {
        isWaiting = true;
    } else {
        postModules.at(postModulePos++)->init(path, contextModule);
    }
}

void WorldPathModule::addModule(WorldPathModuleInterface &module, bool isPost) {
    if (!isPost) {
        preModules.push_back(&module);
    } else {
        postModules.push_back(&module);
    }
}