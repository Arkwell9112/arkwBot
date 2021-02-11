#include "HavenBagRoomUpdateMessage.h"

void HavenBagRoomUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagRoomUpdateMessage(input);
}

void HavenBagRoomUpdateMessage::deserializeAs_HavenBagRoomUpdateMessage(ICustomDataInput &input) {
    HavenBagRoomPreviewInformation _item2;
    this->_actionFunc(input);
    unsigned int _roomsPreviewLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _roomsPreviewLen; _i2++) {
        _item2.deserialize(input);
        this->roomsPreview.push_back(_item2);
    }
}

void HavenBagRoomUpdateMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

void HavenBagRoomUpdateMessage::_roomsPreviewFunc(ICustomDataInput &input) {
    HavenBagRoomPreviewInformation _item;
    _item.deserialize(input);
    this->roomsPreview.push_back(_item);
}

