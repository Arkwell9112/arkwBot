#ifndef EXCHANGESTARTOKMULTICRAFTCRAFTERMESSAGE
#define EXCHANGESTARTOKMULTICRAFTCRAFTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkMulticraftCrafterMessage : public NetworkInterface {
public:
    unsigned int skillId = 0;
    unsigned int protocolId = 2078;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkMulticraftCrafterMessage(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);
};

#endif