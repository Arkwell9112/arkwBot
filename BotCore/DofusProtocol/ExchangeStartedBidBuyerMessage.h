#ifndef EXCHANGESTARTEDBIDBUYERMESSAGE
#define EXCHANGESTARTEDBIDBUYERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "SellerBuyerDescriptor.h"

class ExchangeStartedBidBuyerMessage : public NetworkInterface {
public:
    SellerBuyerDescriptor buyerDescriptor;
    unsigned int protocolId = 2974;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedBidBuyerMessage(ICustomDataInput &input);
};

#endif