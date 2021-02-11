#ifndef FOCUSEDEXCHANGEREADYMESSAGE
#define FOCUSEDEXCHANGEREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeReadyMessage.h"

class FocusedExchangeReadyMessage : public ExchangeReadyMessage {
public:
    unsigned int focusActionId = 0;
    unsigned int protocolId = 9409;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FocusedExchangeReadyMessage(ICustomDataInput &input);

    void _focusActionIdFunc(ICustomDataInput &input);
};

#endif