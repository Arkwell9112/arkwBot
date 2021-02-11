#include "NotificationByServerMessage.h"

void NotificationByServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NotificationByServerMessage(input);
}

void NotificationByServerMessage::deserializeAs_NotificationByServerMessage(ICustomDataInput &input) {
    std::string _val2;
    this->_idFunc(input);
    unsigned int _parametersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _parametersLen; _i2++) {
        _val2 = input.readUTF();
        this->parameters.push_back(_val2);
    }
    this->_forceOpenFunc(input);
}

void NotificationByServerMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void NotificationByServerMessage::_parametersFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->parameters.push_back(_val);
}

void NotificationByServerMessage::_forceOpenFunc(ICustomDataInput &input) {
    this->forceOpen = input.readBoolean();
}

