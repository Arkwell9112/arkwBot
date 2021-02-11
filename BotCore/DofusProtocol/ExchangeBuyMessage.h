#ifndef EXCHANGEBUYMESSAGE
#define EXCHANGEBUYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBuyMessage : public NetworkInterface {
public:
    unsigned int objectToBuyId = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 7795;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBuyMessage(ICustomDataInput &input);

    void _objectToBuyIdFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif