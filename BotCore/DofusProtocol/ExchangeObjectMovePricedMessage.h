#ifndef EXCHANGEOBJECTMOVEPRICEDMESSAGE
#define EXCHANGEOBJECTMOVEPRICEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMoveMessage.h"

class ExchangeObjectMovePricedMessage : public ExchangeObjectMoveMessage {
public:
    double price = 0;
    unsigned int protocolId = 9236;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectMovePricedMessage(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif