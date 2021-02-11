#ifndef EXCHANGESETCRAFTRECIPEMESSAGE
#define EXCHANGESETCRAFTRECIPEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeSetCraftRecipeMessage : public NetworkInterface {
public:
    unsigned int objectGID = 0;
    unsigned int protocolId = 988;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeSetCraftRecipeMessage(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);
};

#endif