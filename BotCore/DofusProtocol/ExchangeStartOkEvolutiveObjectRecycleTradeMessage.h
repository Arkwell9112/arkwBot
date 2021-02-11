#ifndef EXCHANGESTARTOKEVOLUTIVEOBJECTRECYCLETRADEMESSAGE
#define EXCHANGESTARTOKEVOLUTIVEOBJECTRECYCLETRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkEvolutiveObjectRecycleTradeMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6495;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkEvolutiveObjectRecycleTradeMessage(ICustomDataInput &input);
};

#endif