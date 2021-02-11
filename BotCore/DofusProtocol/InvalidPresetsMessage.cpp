#include "InvalidPresetsMessage.h"

void InvalidPresetsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InvalidPresetsMessage(input);
}

void InvalidPresetsMessage::deserializeAs_InvalidPresetsMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _presetIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _presetIdsLen; _i1++) {
        _val1 = input.readShort();

        this->presetIds.push_back(_val1);
    }
}

void InvalidPresetsMessage::_presetIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readShort();

    this->presetIds.push_back(_val);
}

