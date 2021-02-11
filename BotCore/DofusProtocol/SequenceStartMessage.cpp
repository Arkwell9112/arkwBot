#include "SequenceStartMessage.h"

void SequenceStartMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SequenceStartMessage(input);
}

void SequenceStartMessage::deserializeAs_SequenceStartMessage(ICustomDataInput &input) {
    this->_sequenceTypeFunc(input);
    this->_authorIdFunc(input);
}

void SequenceStartMessage::_sequenceTypeFunc(ICustomDataInput &input) {
    this->sequenceType = input.readByte();
}

void SequenceStartMessage::_authorIdFunc(ICustomDataInput &input) {
    this->authorId = input.readDouble();

}

