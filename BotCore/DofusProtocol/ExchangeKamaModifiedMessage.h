#ifndef EXCHANGEKAMAMODIFIEDMESSAGE
#define EXCHANGEKAMAMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMessage.h"

class ExchangeKamaModifiedMessage : public ExchangeObjectMessage {
public:
    double quantity = 0;
    unsigned int protocolId = 598;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeKamaModifiedMessage(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif