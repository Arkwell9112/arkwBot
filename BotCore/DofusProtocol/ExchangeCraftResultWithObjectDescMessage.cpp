#include "ExchangeCraftResultWithObjectDescMessage.h"

void ExchangeCraftResultWithObjectDescMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftResultWithObjectDescMessage(input);
}

void ExchangeCraftResultWithObjectDescMessage::deserializeAs_ExchangeCraftResultWithObjectDescMessage(
        ICustomDataInput &input) {
    ExchangeCraftResultMessage::deserialize(input);
    this->objectInfo.deserialize(input);
}

