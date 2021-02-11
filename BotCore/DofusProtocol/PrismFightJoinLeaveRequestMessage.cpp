#include "PrismFightJoinLeaveRequestMessage.h"

void PrismFightJoinLeaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightJoinLeaveRequestMessage(input);
}

void PrismFightJoinLeaveRequestMessage::deserializeAs_PrismFightJoinLeaveRequestMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_joinFunc(input);
}

void PrismFightJoinLeaveRequestMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightJoinLeaveRequestMessage::_joinFunc(ICustomDataInput &input) {
    this->join = input.readBoolean();
}

