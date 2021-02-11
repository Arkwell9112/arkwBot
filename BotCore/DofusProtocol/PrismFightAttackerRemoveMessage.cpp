#include "PrismFightAttackerRemoveMessage.h"

void PrismFightAttackerRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightAttackerRemoveMessage(input);
}

void PrismFightAttackerRemoveMessage::deserializeAs_PrismFightAttackerRemoveMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    this->_fighterToRemoveIdFunc(input);
}

void PrismFightAttackerRemoveMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightAttackerRemoveMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void PrismFightAttackerRemoveMessage::_fighterToRemoveIdFunc(ICustomDataInput &input) {
    this->fighterToRemoveId = input.readVarUhLong();

}

