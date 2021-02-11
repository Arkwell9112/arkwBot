#include "../IO/BooleanByteWrapper.h"
#include "IdolSelectedMessage.h"

void IdolSelectedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolSelectedMessage(input);
}

void IdolSelectedMessage::deserializeAs_IdolSelectedMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_idolIdFunc(input);
}

void IdolSelectedMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->activate = BooleanByteWrapper::getFlag(_box0, 0);
    this->party = BooleanByteWrapper::getFlag(_box0, 1);
}

void IdolSelectedMessage::_idolIdFunc(ICustomDataInput &input) {
    this->idolId = input.readVarUhShort();

}

