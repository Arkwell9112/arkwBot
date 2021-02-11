#ifndef EXCHANGECRAFTCOUNTREQUESTMESSAGE
#define EXCHANGECRAFTCOUNTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCraftCountRequestMessage : public NetworkInterface {
public:
    int count = 0;
    unsigned int protocolId = 6548;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftCountRequestMessage(ICustomDataInput &input);

    void _countFunc(ICustomDataInput &input);
};

#endif