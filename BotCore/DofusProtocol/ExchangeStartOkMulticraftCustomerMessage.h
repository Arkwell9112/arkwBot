#ifndef EXCHANGESTARTOKMULTICRAFTCUSTOMERMESSAGE
#define EXCHANGESTARTOKMULTICRAFTCUSTOMERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkMulticraftCustomerMessage : public NetworkInterface {
public:
    unsigned int skillId = 0;
    unsigned int crafterJobLevel = 0;
    unsigned int protocolId = 1409;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkMulticraftCustomerMessage(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);

    void _crafterJobLevelFunc(ICustomDataInput &input);
};

#endif