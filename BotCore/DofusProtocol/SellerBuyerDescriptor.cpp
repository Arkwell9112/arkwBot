#include "SellerBuyerDescriptor.h"

void SellerBuyerDescriptor::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SellerBuyerDescriptor(input);
}

void SellerBuyerDescriptor::deserializeAs_SellerBuyerDescriptor(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _quantitiesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _quantitiesLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->quantities.push_back(_val1);
    }
    unsigned int _typesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _typesLen; _i2++) {
        _val2 = input.readVarUhInt();

        this->types.push_back(_val2);
    }
    this->_taxPercentageFunc(input);
    this->_taxModificationPercentageFunc(input);
    this->_maxItemLevelFunc(input);
    this->_maxItemPerAccountFunc(input);
    this->_npcContextualIdFunc(input);
    this->_unsoldDelayFunc(input);
}

void SellerBuyerDescriptor::_quantitiesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->quantities.push_back(_val);
}

void SellerBuyerDescriptor::_typesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->types.push_back(_val);
}

void SellerBuyerDescriptor::_taxPercentageFunc(ICustomDataInput &input) {
    this->taxPercentage = input.readFloat();
}

void SellerBuyerDescriptor::_taxModificationPercentageFunc(ICustomDataInput &input) {
    this->taxModificationPercentage = input.readFloat();
}

void SellerBuyerDescriptor::_maxItemLevelFunc(ICustomDataInput &input) {
    this->maxItemLevel = input.readUnsignedByte();

}

void SellerBuyerDescriptor::_maxItemPerAccountFunc(ICustomDataInput &input) {
    this->maxItemPerAccount = input.readVarUhInt();

}

void SellerBuyerDescriptor::_npcContextualIdFunc(ICustomDataInput &input) {
    this->npcContextualId = input.readInt();
}

void SellerBuyerDescriptor::_unsoldDelayFunc(ICustomDataInput &input) {
    this->unsoldDelay = input.readVarUhShort();

}

