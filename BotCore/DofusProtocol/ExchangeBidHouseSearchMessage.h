#ifndef EXCHANGEBIDHOUSESEARCHMESSAGE
#define EXCHANGEBIDHOUSESEARCHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHouseSearchMessage : public NetworkInterface {
public:
    unsigned int genId = 0;
    bool follow = false;
    unsigned int protocolId = 1477;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseSearchMessage(ICustomDataInput &input);

    void _genIdFunc(ICustomDataInput &input);

    void _followFunc(ICustomDataInput &input);
};

#endif