#include "LivingObjectMessageRequestMessage.h"

void LivingObjectMessageRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LivingObjectMessageRequestMessage(input);
}

void LivingObjectMessageRequestMessage::deserializeAs_LivingObjectMessageRequestMessage(ICustomDataInput &input) {
    std::string _val2;
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _parametersLen; _i2++) {
        _val2 = input.readUTF();
        this->parameters.push_back(_val2);
    }
    this->_livingObjectFunc(input);
}

void LivingObjectMessageRequestMessage::_msgIdFunc(ICustomDataInput &input) {
    this->msgId = input.readVarUhShort();

}

void LivingObjectMessageRequestMessage::_parametersFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->parameters.push_back(_val);
}

void LivingObjectMessageRequestMessage::_livingObjectFunc(ICustomDataInput &input) {
    this->livingObject = input.readVarUhInt();

}

