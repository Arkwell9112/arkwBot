#include "ChatSmileyExtraPackListMessage.h"

void ChatSmileyExtraPackListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatSmileyExtraPackListMessage(input);
}

void ChatSmileyExtraPackListMessage::deserializeAs_ChatSmileyExtraPackListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _packIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _packIdsLen; _i1++) {
        _val1 = input.readByte();

        this->packIds.push_back(_val1);
    }
}

void ChatSmileyExtraPackListMessage::_packIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->packIds.push_back(_val);
}

