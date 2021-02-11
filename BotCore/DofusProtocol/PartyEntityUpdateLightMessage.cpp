#include "PartyEntityUpdateLightMessage.h"

void PartyEntityUpdateLightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyEntityUpdateLightMessage(input);
}

void PartyEntityUpdateLightMessage::deserializeAs_PartyEntityUpdateLightMessage(ICustomDataInput &input) {
    PartyUpdateLightMessage::deserialize(input);
    this->_indexIdFunc(input);
}

void PartyEntityUpdateLightMessage::_indexIdFunc(ICustomDataInput &input) {
    this->indexId = input.readByte();

}

