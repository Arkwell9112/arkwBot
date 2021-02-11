#include "IdolPartyLostMessage.h"

void IdolPartyLostMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolPartyLostMessage(input);
}

void IdolPartyLostMessage::deserializeAs_IdolPartyLostMessage(ICustomDataInput &input) {
    this->_idolIdFunc(input);
}

void IdolPartyLostMessage::_idolIdFunc(ICustomDataInput &input) {
    this->idolId = input.readVarUhShort();

}

