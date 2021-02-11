#ifndef HOUSEBUYREQUESTMESSAGE
#define HOUSEBUYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseBuyRequestMessage : public NetworkInterface {
public:
    double proposedPrice = 0;
    unsigned int protocolId = 7840;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseBuyRequestMessage(ICustomDataInput &input);

    void _proposedPriceFunc(ICustomDataInput &input);
};

#endif