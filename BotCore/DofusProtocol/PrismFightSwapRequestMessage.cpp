#include "PrismFightSwapRequestMessage.h"

void PrismFightSwapRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightSwapRequestMessage(input);
}

void PrismFightSwapRequestMessage::deserializeAs_PrismFightSwapRequestMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_targetIdFunc(input);
}

void PrismFightSwapRequestMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightSwapRequestMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

