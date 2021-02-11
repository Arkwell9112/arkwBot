#ifndef EXCHANGESELLMESSAGE
#define EXCHANGESELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeSellMessage : public NetworkInterface {
public:
    unsigned int objectToSellId = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 6845;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeSellMessage(ICustomDataInput &input);

    void _objectToSellIdFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif