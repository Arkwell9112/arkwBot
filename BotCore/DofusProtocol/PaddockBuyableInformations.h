#ifndef PADDOCKBUYABLEINFORMATIONS
#define PADDOCKBUYABLEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockBuyableInformations : public NetworkInterface {
public:
    double price = 0;
    bool locked = false;
    unsigned int protocolId = 3664;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockBuyableInformations(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);

    void _lockedFunc(ICustomDataInput &input);
};

#endif