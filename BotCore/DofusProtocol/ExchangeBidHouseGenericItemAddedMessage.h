#ifndef EXCHANGEBIDHOUSEGENERICITEMADDEDMESSAGE
#define EXCHANGEBIDHOUSEGENERICITEMADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ExchangeBidHouseGenericItemAddedMessage : public NetworkInterface {
public:
    unsigned int objGenericId = 0;
    unsigned int protocolId = 9923;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseGenericItemAddedMessage(ICustomDataInput &input);

    void _objGenericIdFunc(ICustomDataInput &input);
};

#endif