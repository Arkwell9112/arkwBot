#include "PrismFightAddedMessage.h"

void PrismFightAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightAddedMessage(input);
}

void PrismFightAddedMessage::deserializeAs_PrismFightAddedMessage(ICustomDataInput &input) {
    this->fight.deserialize(input);
}

