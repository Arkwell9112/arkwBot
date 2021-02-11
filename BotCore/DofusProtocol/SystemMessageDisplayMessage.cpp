#include "SystemMessageDisplayMessage.h"

void SystemMessageDisplayMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SystemMessageDisplayMessage(input);
}

void SystemMessageDisplayMessage::deserializeAs_SystemMessageDisplayMessage(ICustomDataInput &input) {
    std::string _val3;
    this->_hangUpFunc(input);
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input.readUTF();
        this->parameters.push_back(_val3);
    }
}

void SystemMessageDisplayMessage::_hangUpFunc(ICustomDataInput &input) {
    this->hangUp = input.readBoolean();
}

void SystemMessageDisplayMessage::_msgIdFunc(ICustomDataInput &input) {
    this->msgId = input.readVarUhShort();

}

void SystemMessageDisplayMessage::_parametersFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->parameters.push_back(_val);
}

