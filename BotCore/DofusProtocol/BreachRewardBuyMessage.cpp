#include "BreachRewardBuyMessage.h"

void BreachRewardBuyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachRewardBuyMessage(input);
}

void BreachRewardBuyMessage::deserializeAs_BreachRewardBuyMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void BreachRewardBuyMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhInt();

}

