#ifndef PADDOCKBUYREQUESTMESSAGE
#define PADDOCKBUYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockBuyRequestMessage : public NetworkInterface {
public:
    double proposedPrice = 0;
    unsigned int protocolId = 5153;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockBuyRequestMessage(ICustomDataInput &input);

    void _proposedPriceFunc(ICustomDataInput &input);
};

#endif