#include "DecraftedItemStackInfo.h"

void DecraftedItemStackInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DecraftedItemStackInfo(input);
}

void DecraftedItemStackInfo::deserializeAs_DecraftedItemStackInfo(ICustomDataInput &input) {
    unsigned int _val4 = 0;
    unsigned int _val5 = 0;
    this->_objectUIDFunc(input);
    this->_bonusMinFunc(input);
    this->_bonusMaxFunc(input);
    unsigned int _runesIdLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _runesIdLen; _i4++) {
        _val4 = input.readVarUhShort();

        this->runesId.push_back(_val4);
    }
    unsigned int _runesQtyLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _runesQtyLen; _i5++) {
        _val5 = input.readVarUhInt();

        this->runesQty.push_back(_val5);
    }
}

void DecraftedItemStackInfo::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void DecraftedItemStackInfo::_bonusMinFunc(ICustomDataInput &input) {
    this->bonusMin = input.readFloat();
}

void DecraftedItemStackInfo::_bonusMaxFunc(ICustomDataInput &input) {
    this->bonusMax = input.readFloat();
}

void DecraftedItemStackInfo::_runesIdFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->runesId.push_back(_val);
}

void DecraftedItemStackInfo::_runesQtyFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->runesQty.push_back(_val);
}

