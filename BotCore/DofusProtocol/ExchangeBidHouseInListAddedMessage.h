#ifndef EXCHANGEBIDHOUSEINLISTADDEDMESSAGE
#define EXCHANGEBIDHOUSEINLISTADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectEffect.h"

class ExchangeBidHouseInListAddedMessage : public NetworkInterface {
public:
    int itemUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;
    std::vector<ObjectEffect> effects;
    std::vector<double> prices;
    unsigned int protocolId = 8309;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseInListAddedMessage(ICustomDataInput &input);

    void _itemUIDFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _objectTypeFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _pricesFunc(ICustomDataInput &input);
};

#endif