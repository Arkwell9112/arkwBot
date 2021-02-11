#include "EmoteListMessage.h"

void EmoteListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmoteListMessage(input);
}

void EmoteListMessage::deserializeAs_EmoteListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _emoteIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _emoteIdsLen; _i1++) {
        _val1 = input.readUnsignedByte();

        this->emoteIds.push_back(_val1);
    }
}

void EmoteListMessage::_emoteIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readUnsignedByte();

    this->emoteIds.push_back(_val);
}

