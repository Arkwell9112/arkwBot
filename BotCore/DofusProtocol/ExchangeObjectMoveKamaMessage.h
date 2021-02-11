#ifndef EXCHANGEOBJECTMOVEKAMAMESSAGE
#define EXCHANGEOBJECTMOVEKAMAMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectMoveKamaMessage : public NetworkInterface {
public:
    double quantity = 0;
    unsigned int protocolId = 9857;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectMoveKamaMessage(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif