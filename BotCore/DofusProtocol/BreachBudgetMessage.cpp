#include "BreachBudgetMessage.h"

void BreachBudgetMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachBudgetMessage(input);
}

void BreachBudgetMessage::deserializeAs_BreachBudgetMessage(ICustomDataInput &input) {
    this->_bugdetFunc(input);
}

void BreachBudgetMessage::_bugdetFunc(ICustomDataInput &input) {
    this->bugdet = input.readVarUhInt();

}

