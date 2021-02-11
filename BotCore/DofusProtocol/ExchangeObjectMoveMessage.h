#ifndef EXCHANGEOBJECTMOVEMESSAGE
#define EXCHANGEOBJECTMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectMoveMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    int quantity = 0;
    unsigned int protocolId = 7683;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectMoveMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif