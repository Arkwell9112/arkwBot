#include "CheckFileMessage.h"

void CheckFileMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CheckFileMessage(input);
}

void CheckFileMessage::deserializeAs_CheckFileMessage(ICustomDataInput &input) {
    this->_filenameHashFunc(input);
    this->_typeFunc(input);
    this->_valueFunc(input);
}

void CheckFileMessage::_filenameHashFunc(ICustomDataInput &input) {
    this->filenameHash = input.readUTF();
}

void CheckFileMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

void CheckFileMessage::_valueFunc(ICustomDataInput &input) {
    this->value = input.readUTF();
}

