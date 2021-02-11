#include "FocusedExchangeReadyMessage.h"

void FocusedExchangeReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FocusedExchangeReadyMessage(input);
}

void FocusedExchangeReadyMessage::deserializeAs_FocusedExchangeReadyMessage(ICustomDataInput &input) {
    ExchangeReadyMessage::deserialize(input);
    this->_focusActionIdFunc(input);
}

void FocusedExchangeReadyMessage::_focusActionIdFunc(ICustomDataInput &input) {
    this->focusActionId = input.readVarUhInt();

}

