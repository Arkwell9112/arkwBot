#include "PrismFightDefenderLeaveMessage.h"

void PrismFightDefenderLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightDefenderLeaveMessage(input);
}

void PrismFightDefenderLeaveMessage::deserializeAs_PrismFightDefenderLeaveMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    this->_fighterToRemoveIdFunc(input);
}

void PrismFightDefenderLeaveMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightDefenderLeaveMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void PrismFightDefenderLeaveMessage::_fighterToRemoveIdFunc(ICustomDataInput &input) {
    this->fighterToRemoveId = input.readVarUhLong();

}

