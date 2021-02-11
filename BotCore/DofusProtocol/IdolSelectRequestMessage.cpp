#include "../IO/BooleanByteWrapper.h"
#include "IdolSelectRequestMessage.h"

void IdolSelectRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolSelectRequestMessage(input);
}

void IdolSelectRequestMessage::deserializeAs_IdolSelectRequestMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_idolIdFunc(input);
}

void IdolSelectRequestMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->activate = BooleanByteWrapper::getFlag(_box0, 0);
    this->party = BooleanByteWrapper::getFlag(_box0, 1);
}

void IdolSelectRequestMessage::_idolIdFunc(ICustomDataInput &input) {
    this->idolId = input.readVarUhShort();

}

