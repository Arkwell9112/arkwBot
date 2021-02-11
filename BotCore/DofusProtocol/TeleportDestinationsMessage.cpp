#include "TeleportDestinationsMessage.h"

void TeleportDestinationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportDestinationsMessage(input);
}

void TeleportDestinationsMessage::deserializeAs_TeleportDestinationsMessage(ICustomDataInput &input) {
    TeleportDestination _item2;
    this->_typeFunc(input);
    unsigned int _destinationsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _destinationsLen; _i2++) {
        _item2.deserialize(input);
        this->destinations.push_back(_item2);
    }
}

void TeleportDestinationsMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

void TeleportDestinationsMessage::_destinationsFunc(ICustomDataInput &input) {
    TeleportDestination _item;
    _item.deserialize(input);
    this->destinations.push_back(_item);
}

