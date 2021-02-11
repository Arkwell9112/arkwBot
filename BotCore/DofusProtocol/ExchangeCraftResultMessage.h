#ifndef EXCHANGECRAFTRESULTMESSAGE
#define EXCHANGECRAFTRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCraftResultMessage : public NetworkInterface {
public:
    unsigned int craftResult = 0;
    unsigned int protocolId = 5033;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftResultMessage(ICustomDataInput &input);

    void _craftResultFunc(ICustomDataInput &input);
};

#endif