#include "ExchangeTypesExchangerDescriptionForUserMessage.h"

void ExchangeTypesExchangerDescriptionForUserMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeTypesExchangerDescriptionForUserMessage(input);
}

void ExchangeTypesExchangerDescriptionForUserMessage::deserializeAs_ExchangeTypesExchangerDescriptionForUserMessage(
        ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_objectTypeFunc(input);
    unsigned int _typeDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _typeDescriptionLen; _i2++) {
        _val2 = input.readVarUhInt();

        this->typeDescription.push_back(_val2);
    }
}

void ExchangeTypesExchangerDescriptionForUserMessage::_objectTypeFunc(ICustomDataInput &input) {
    this->objectType = input.readInt();

}

void ExchangeTypesExchangerDescriptionForUserMessage::_typeDescriptionFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->typeDescription.push_back(_val);
}

