#include "TextInformationMessage.h"

void TextInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TextInformationMessage(input);
}

void TextInformationMessage::deserializeAs_TextInformationMessage(ICustomDataInput &input) {
    std::string _val3;
    this->_msgTypeFunc(input);
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input.readUTF();
        this->parameters.push_back(_val3);
    }
}

void TextInformationMessage::_msgTypeFunc(ICustomDataInput &input) {
    this->msgType = input.readByte();

}

void TextInformationMessage::_msgIdFunc(ICustomDataInput &input) {
    this->msgId = input.readVarUhShort();

}

void TextInformationMessage::_parametersFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->parameters.push_back(_val);
}

