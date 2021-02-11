#ifndef EXCHANGECRAFTCOUNTMODIFIEDMESSAGE
#define EXCHANGECRAFTCOUNTMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCraftCountModifiedMessage : public NetworkInterface {
public:
    int count = 0;
    unsigned int protocolId = 6334;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftCountModifiedMessage(ICustomDataInput &input);

    void _countFunc(ICustomDataInput &input);
};

#endif