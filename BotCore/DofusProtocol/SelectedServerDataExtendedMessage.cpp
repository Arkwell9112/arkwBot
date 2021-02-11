#include "SelectedServerDataExtendedMessage.h"

void SelectedServerDataExtendedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SelectedServerDataExtendedMessage(input);
}

void SelectedServerDataExtendedMessage::deserializeAs_SelectedServerDataExtendedMessage(ICustomDataInput &input) {
    GameServerInformations _item1;
    SelectedServerDataMessage::deserialize(input);
    unsigned int _serversLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _item1.deserialize(input);
        this->servers.push_back(_item1);
    }
}

void SelectedServerDataExtendedMessage::_serversFunc(ICustomDataInput &input) {
    GameServerInformations _item;
    _item.deserialize(input);
    this->servers.push_back(_item);
}

