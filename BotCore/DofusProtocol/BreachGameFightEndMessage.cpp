#include "BreachGameFightEndMessage.h"

void BreachGameFightEndMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachGameFightEndMessage(input);
}

void BreachGameFightEndMessage::deserializeAs_BreachGameFightEndMessage(ICustomDataInput &input) {
    GameFightEndMessage::deserialize(input);
    this->_budgetFunc(input);
}

void BreachGameFightEndMessage::_budgetFunc(ICustomDataInput &input) {
    this->budget = input.readInt();
}

