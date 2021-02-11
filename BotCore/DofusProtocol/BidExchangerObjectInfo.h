#ifndef BIDEXCHANGEROBJECTINFO
#define BIDEXCHANGEROBJECTINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectEffect.h"

class BidExchangerObjectInfo : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;
    std::vector<ObjectEffect> effects;
    std::vector<double> prices;
    unsigned int protocolId = 4958;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BidExchangerObjectInfo(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _objectTypeFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _pricesFunc(ICustomDataInput &input);
};

#endif