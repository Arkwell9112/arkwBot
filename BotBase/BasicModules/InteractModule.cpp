#include "InteractModule.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/DofusProtocol/InteractiveElementUpdatedMessage.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcher.h"

void InteractModule::init(const Element &_element, const Point &_offset) {
    count = 0;
    isWaiting = true;
    clickPoint = _element.getScreenPosition() + _offset;
    identifier = _element.getIdentifier();
    new(&click) Timeout(*this, 2000);
}

void InteractModule::timeoutCallBack(void *caller) {
    if (caller == &click) {
        ClickManager::click(clickPoint);
        new(&error) Timeout(*this, 10000);
    } else if (caller == &error) {
        isWaiting = false;
        parent.moduleCallBack(this);
    }
}

void InteractModule::dispatcherCallBack(Packet &packet) {
    if (isWaiting) {
        if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "InteractiveElementUpdatedMessage") {
            InteractiveElementUpdatedMessage currentMessage;
            ICustomDataInput input(packet.getPacketSize(), packet.getData());
            currentMessage.deserialize(input);
            if (currentMessage.interactiveElement.elementId == identifier) {
                count++;
            }
            if (count > 1) {
                error.cancelTimeOut();
                isWaiting = false;
                parent.moduleCallBack(this);
            }
        }
    }
}

void InteractModule::cancel() {
    isWaiting = false;
    click.cancelTimeOut();
    error.cancelTimeOut();
}