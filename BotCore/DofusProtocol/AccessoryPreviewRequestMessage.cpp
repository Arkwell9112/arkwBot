#include "AccessoryPreviewRequestMessage.h"

void AccessoryPreviewRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccessoryPreviewRequestMessage(input);
}

void AccessoryPreviewRequestMessage::deserializeAs_AccessoryPreviewRequestMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _genericIdLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _genericIdLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->genericId.push_back(_val1);
    }
}

void AccessoryPreviewRequestMessage::_genericIdFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->genericId.push_back(_val);
}

