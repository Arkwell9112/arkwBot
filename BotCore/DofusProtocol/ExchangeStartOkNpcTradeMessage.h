#ifndef EXCHANGESTARTOKNPCTRADEMESSAGE
#define EXCHANGESTARTOKNPCTRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkNpcTradeMessage : public NetworkInterface {
public:
    double npcId = 0;
    unsigned int protocolId = 4664;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkNpcTradeMessage(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);
};

#endif