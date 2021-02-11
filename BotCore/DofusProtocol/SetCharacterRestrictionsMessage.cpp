#include "SetCharacterRestrictionsMessage.h"

void SetCharacterRestrictionsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SetCharacterRestrictionsMessage(input);
}

void SetCharacterRestrictionsMessage::deserializeAs_SetCharacterRestrictionsMessage(ICustomDataInput &input) {
    this->_actorIdFunc(input);
    this->restrictions.deserialize(input);
}

void SetCharacterRestrictionsMessage::_actorIdFunc(ICustomDataInput &input) {
    this->actorId = input.readDouble();

}

