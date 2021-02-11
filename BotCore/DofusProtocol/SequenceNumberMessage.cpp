#include "SequenceNumberMessage.h"

void SequenceNumberMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SequenceNumberMessage(input);
}

void SequenceNumberMessage::deserializeAs_SequenceNumberMessage(ICustomDataInput &input) {
    this->_numberFunc(input);
}

void SequenceNumberMessage::_numberFunc(ICustomDataInput &input) {
    this->number = input.readUnsignedShort();

}

