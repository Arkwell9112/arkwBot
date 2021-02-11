#ifndef EXCHANGEBIDHOUSEGENERICITEMREMOVEDMESSAGE
#define EXCHANGEBIDHOUSEGENERICITEMREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ExchangeBidHouseGenericItemRemovedMessage : public NetworkInterface {
public:
    unsigned int objGenericId = 0;
    unsigned int protocolId = 4098;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseGenericItemRemovedMessage(ICustomDataInput &input);

    void _objGenericIdFunc(ICustomDataInput &input);
};

#endif