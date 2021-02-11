#include "BreachBonusMessage.h"

void BreachBonusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachBonusMessage(input);
}

void BreachBonusMessage::deserializeAs_BreachBonusMessage(ICustomDataInput &input) {
    this->bonus.deserialize(input);
}

