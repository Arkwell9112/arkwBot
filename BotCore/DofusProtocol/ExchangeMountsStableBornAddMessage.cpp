#include "ExchangeMountsStableBornAddMessage.h"

void ExchangeMountsStableBornAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountsStableBornAddMessage(input);
}

void ExchangeMountsStableBornAddMessage::deserializeAs_ExchangeMountsStableBornAddMessage(ICustomDataInput &input) {
    ExchangeMountsStableAddMessage::deserialize(input);
}

