#include "ExchangeObjectTransfertListToInvMessage.h"

void ExchangeObjectTransfertListToInvMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectTransfertListToInvMessage(input);
}

void ExchangeObjectTransfertListToInvMessage::deserializeAs_ExchangeObjectTransfertListToInvMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _idsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->ids.push_back(_val1);
    }
}

void ExchangeObjectTransfertListToInvMessage::_idsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->ids.push_back(_val);
}

