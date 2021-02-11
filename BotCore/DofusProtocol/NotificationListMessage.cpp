#include "NotificationListMessage.h"

void NotificationListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NotificationListMessage(input);
}

void NotificationListMessage::deserializeAs_NotificationListMessage(ICustomDataInput &input) {
    int _val1 = 0;
    unsigned int _flagsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _flagsLen; _i1++) {
        _val1 = input.readVarInt();
        this->flags.push_back(_val1);
    }
}

void NotificationListMessage::_flagsFunc(ICustomDataInput &input) {
    int _val = input.readVarInt();
    this->flags.push_back(_val);
}

