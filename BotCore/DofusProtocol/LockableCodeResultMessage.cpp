#include "LockableCodeResultMessage.h"

void LockableCodeResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableCodeResultMessage(input);
}

void LockableCodeResultMessage::deserializeAs_LockableCodeResultMessage(ICustomDataInput &input) {
    this->_resultFunc(input);
}

void LockableCodeResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

