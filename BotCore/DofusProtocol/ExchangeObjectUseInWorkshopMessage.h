#ifndef EXCHANGEOBJECTUSEINWORKSHOPMESSAGE
#define EXCHANGEOBJECTUSEINWORKSHOPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectUseInWorkshopMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    int quantity = 0;
    unsigned int protocolId = 511;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectUseInWorkshopMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif