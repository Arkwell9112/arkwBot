#include "FullInteractModule.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcher.h"
#include "../../BotCore/LogManager.h"

void FullInteractModule::init(WorldPath &path, const MapContextModule &contextModule) {
    LogManager::getInstance().log("FullInteractModule: Init FullInteractModule.", 1);
    PacketDispatcher::getInstance().addListener(interactModule);
    _contextModule = &contextModule;
    elemPos = 0;
    prevElemPos = -1;
    doNextElem();
}

void FullInteractModule::doNextElem() {
    LogManager::getInstance().log("FullInteractModule: Doing next Element: " + std::to_string(elemPos) + ".", 2);
    const std::vector<InteractiveElement> &interactive = _contextModule->getMessage().interactiveElements;
    if (_contextModule->getWeight() > ConfigManager::getInstance().getMaxWeight()) {
        elemPos = interactive.size();
    }
    for (unsigned int i = elemPos; i < interactive.size(); i++) {
        try {
            const InteractiveElement &currentElement = interactive.at(i);
            const Collectable &collectable = ConfigManager::getInstance().getCollectable(
                    currentElement.elementTypeId);
            if (!currentElement.enabledSkills.empty() && currentElement.onCurrentMap && i != prevElemPos) {
                elemPos = i;
                prevElemPos = (int) i;
                interactModule.init(_contextModule->getContext().getElement(currentElement.elementId), collectable);
                return;
            }
        } catch (std::out_of_range &e) {
            continue;
        }
    }
    parent.moduleCallBack(this);
}

void FullInteractModule::moduleCallBack(void *child) {
    if (child == &interactModule) {
        doNextElem();
    }
}

void FullInteractModule::cancel() {
    interactModule.cancel();
}