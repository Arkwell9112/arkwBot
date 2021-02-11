#include "ConsoleMessage.h"

void ConsoleMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ConsoleMessage(input);
}

void ConsoleMessage::deserializeAs_ConsoleMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
    this->_contentFunc(input);
}

void ConsoleMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

void ConsoleMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

