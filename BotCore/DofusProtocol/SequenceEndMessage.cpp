#include "SequenceEndMessage.h"

void SequenceEndMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SequenceEndMessage(input);
}

void SequenceEndMessage::deserializeAs_SequenceEndMessage(ICustomDataInput &input) {
    this->_actionIdFunc(input);
    this->_authorIdFunc(input);
    this->_sequenceTypeFunc(input);
}

void SequenceEndMessage::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readVarUhShort();

}

void SequenceEndMessage::_authorIdFunc(ICustomDataInput &input) {
    this->authorId = input.readDouble();

}

void SequenceEndMessage::_sequenceTypeFunc(ICustomDataInput &input) {
    this->sequenceType = input.readByte();
}

