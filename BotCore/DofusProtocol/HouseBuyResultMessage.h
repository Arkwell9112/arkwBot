#ifndef HOUSEBUYRESULTMESSAGE
#define HOUSEBUYRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseBuyResultMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    bool bought = false;
    double realPrice = 0;
    unsigned int protocolId = 2541;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseBuyResultMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _realPriceFunc(ICustomDataInput &input);
};

#endif