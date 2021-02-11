#include "EntityTalkMessage.h"

void EntityTalkMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityTalkMessage(input);
}

void EntityTalkMessage::deserializeAs_EntityTalkMessage(ICustomDataInput &input) {
    std::string _val3;
    this->_entityIdFunc(input);
    this->_textIdFunc(input);
    unsigned int _parametersLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input.readUTF();
        this->parameters.push_back(_val3);
    }
}

void EntityTalkMessage::_entityIdFunc(ICustomDataInput &input) {
    this->entityId = input.readDouble();

}

void EntityTalkMessage::_textIdFunc(ICustomDataInput &input) {
    this->textId = input.readVarUhShort();

}

void EntityTalkMessage::_parametersFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->parameters.push_back(_val);
}

