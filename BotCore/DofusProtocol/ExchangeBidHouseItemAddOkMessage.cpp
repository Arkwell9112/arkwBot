#include "ExchangeBidHouseItemAddOkMessage.h"

void ExchangeBidHouseItemAddOkMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseItemAddOkMessage(input);
}

void ExchangeBidHouseItemAddOkMessage::deserializeAs_ExchangeBidHouseItemAddOkMessage(ICustomDataInput &input) {
    this->itemInfo.deserialize(input);
}

