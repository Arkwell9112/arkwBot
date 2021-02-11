#include "ExchangeObjectTransfertListWithQuantityToInvMessage.h"

void ExchangeObjectTransfertListWithQuantityToInvMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectTransfertListWithQuantityToInvMessage(input);
}

void
ExchangeObjectTransfertListWithQuantityToInvMessage::deserializeAs_ExchangeObjectTransfertListWithQuantityToInvMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _idsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->ids.push_back(_val1);
    }
    unsigned int _qtysLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _qtysLen; _i2++) {
        _val2 = input.readVarUhInt();

        this->qtys.push_back(_val2);
    }
}

void ExchangeObjectTransfertListWithQuantityToInvMessage::_idsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->ids.push_back(_val);
}

void ExchangeObjectTransfertListWithQuantityToInvMessage::_qtysFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->qtys.push_back(_val);
}

