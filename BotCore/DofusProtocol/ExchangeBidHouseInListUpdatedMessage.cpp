#include "ExchangeBidHouseInListUpdatedMessage.h"

void ExchangeBidHouseInListUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseInListUpdatedMessage(input);
}

void ExchangeBidHouseInListUpdatedMessage::deserializeAs_ExchangeBidHouseInListUpdatedMessage(ICustomDataInput &input) {
    ExchangeBidHouseInListAddedMessage::deserialize(input);
}

