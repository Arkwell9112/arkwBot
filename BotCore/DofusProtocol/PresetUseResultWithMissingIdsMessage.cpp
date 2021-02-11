#include "PresetUseResultWithMissingIdsMessage.h"

void PresetUseResultWithMissingIdsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetUseResultWithMissingIdsMessage(input);
}

void PresetUseResultWithMissingIdsMessage::deserializeAs_PresetUseResultWithMissingIdsMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    PresetUseResultMessage::deserialize(input);
    unsigned int _missingIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _missingIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->missingIds.push_back(_val1);
    }
}

void PresetUseResultWithMissingIdsMessage::_missingIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->missingIds.push_back(_val);
}

