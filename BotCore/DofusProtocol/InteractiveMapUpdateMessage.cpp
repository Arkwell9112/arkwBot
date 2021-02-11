#include "../ProtocolTypeManager.h"
#include "InteractiveMapUpdateMessage.h"

void InteractiveMapUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveMapUpdateMessage(input);
}

void InteractiveMapUpdateMessage::deserializeAs_InteractiveMapUpdateMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    InteractiveElement _item1;
    unsigned int _interactiveElementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _interactiveElementsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<InteractiveElement>(input, _id1);
        this->interactiveElements.push_back(_item1);
    }
}

void InteractiveMapUpdateMessage::_interactiveElementsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    InteractiveElement _item = ProtocolTypeManager::getObject<InteractiveElement>(input, _id);
    _item.deserialize(input);
    this->interactiveElements.push_back(_item);
}

