#ifndef EXCHANGEOBJECTMODIFYPRICEDMESSAGE
#define EXCHANGEOBJECTMODIFYPRICEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMovePricedMessage.h"

class ExchangeObjectModifyPricedMessage : public ExchangeObjectMovePricedMessage {
public:
    unsigned int protocolId = 3862;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectModifyPricedMessage(ICustomDataInput &input);
};

#endif