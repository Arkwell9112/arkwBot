#include "ExchangeMountsPaddockRemoveMessage.h"

void ExchangeMountsPaddockRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountsPaddockRemoveMessage(input);
}

void ExchangeMountsPaddockRemoveMessage::deserializeAs_ExchangeMountsPaddockRemoveMessage(ICustomDataInput &input) {
    int _val1 = 0;
    unsigned int _mountsIdLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mountsIdLen; _i1++) {
        _val1 = input.readVarInt();
        this->mountsId.push_back(_val1);
    }
}

void ExchangeMountsPaddockRemoveMessage::_mountsIdFunc(ICustomDataInput &input) {
    int _val = input.readVarInt();
    this->mountsId.push_back(_val);
}

