#include "../IO/BooleanByteWrapper.h"
#include "IdolSelectErrorMessage.h"

void IdolSelectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolSelectErrorMessage(input);
}

void IdolSelectErrorMessage::deserializeAs_IdolSelectErrorMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_reasonFunc(input);
    this->_idolIdFunc(input);
}

void IdolSelectErrorMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->activate = BooleanByteWrapper::getFlag(_box0, 0);
    this->party = BooleanByteWrapper::getFlag(_box0, 1);
}

void IdolSelectErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

void IdolSelectErrorMessage::_idolIdFunc(ICustomDataInput &input) {
    this->idolId = input.readVarUhShort();

}

