#ifndef HOUSESELLINGUPDATEMESSAGE
#define HOUSESELLINGUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HouseSellingUpdateMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    double realPrice = 0;
    std::string buyerName;
    unsigned int protocolId = 8910;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseSellingUpdateMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);

    void _realPriceFunc(ICustomDataInput &input);

    void _buyerNameFunc(ICustomDataInput &input);
};

#endif