#include "BankModule.h"
#include "../../BotCore/ConfigManager.h"

void BankModule::init(WorldPath &path, const MapContextModule &contextModule) {
    if (path.getPosition() == contextModule.getContext()) {
        _path = &path;
        if (_path->getPosition().getAction() == "bank" &&
            contextModule.getWeight() > ConfigManager::getInstance().getMinWeight()) {
            StateModule::init(path, contextModule);
            return;
        }
    }
    parent.moduleCallBack(this);
}

void BankModule::uninit() {
    parent.moduleCallBack(this);
}