#include "DebugInClientMessage.h"

void DebugInClientMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DebugInClientMessage(input);
}

void DebugInClientMessage::deserializeAs_DebugInClientMessage(ICustomDataInput &input) {
    this->_levelFunc(input);
    this->_messageFunc(input);
}

void DebugInClientMessage::_levelFunc(ICustomDataInput &input) {
    this->level = input.readByte();

}

void DebugInClientMessage::_messageFunc(ICustomDataInput &input) {
    this->message = input.readUTF();
}

