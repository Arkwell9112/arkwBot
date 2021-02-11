#include "PartyUpdateLightMessage.h"

void PartyUpdateLightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyUpdateLightMessage(input);
}

void PartyUpdateLightMessage::deserializeAs_PartyUpdateLightMessage(ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_idFunc(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
}

void PartyUpdateLightMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

void PartyUpdateLightMessage::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void PartyUpdateLightMessage::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

void PartyUpdateLightMessage::_prospectingFunc(ICustomDataInput &input) {
    this->prospecting = input.readVarUhShort();

}

void PartyUpdateLightMessage::_regenRateFunc(ICustomDataInput &input) {
    this->regenRate = input.readUnsignedByte();

}

