#include "CheckFileRequestMessage.h"

void CheckFileRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CheckFileRequestMessage(input);
}

void CheckFileRequestMessage::deserializeAs_CheckFileRequestMessage(ICustomDataInput &input) {
    this->_filenameFunc(input);
    this->_typeFunc(input);
}

void CheckFileRequestMessage::_filenameFunc(ICustomDataInput &input) {
    this->filename = input.readUTF();
}

void CheckFileRequestMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

