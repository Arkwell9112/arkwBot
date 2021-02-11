#include "BreachRewardBoughtMessage.h"

void BreachRewardBoughtMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachRewardBoughtMessage(input);
}

void BreachRewardBoughtMessage::deserializeAs_BreachRewardBoughtMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_boughtFunc(input);
}

void BreachRewardBoughtMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhInt();

}

void BreachRewardBoughtMessage::_boughtFunc(ICustomDataInput &input) {
    this->bought = input.readBoolean();
}

