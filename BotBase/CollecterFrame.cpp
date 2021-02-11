#include "CollecterFrame.h"
#include "../BotCore/PacketDispatcher/PacketDispatcher.h"

CollecterFrame CollecterFrame::singleton = CollecterFrame();

void CollecterFrame::init() {
    worldPathModule.init();
    worldPathModule.addModule(fullInteractModule, false);
    worldPathModule.addModule(bankModule, false);
    PacketDispatcher::getInstance().addListener(bankModule);
    worldPathModule.addModule(zaapModule, false);
    PacketDispatcher::getInstance().addListener(zaapModule);
    worldPathModule.addModule(changeMapModule, true);
    PacketDispatcher::getInstance().addListener(changeMapModule);
}

CollecterFrame &CollecterFrame::getInstance() {
    return singleton;
}