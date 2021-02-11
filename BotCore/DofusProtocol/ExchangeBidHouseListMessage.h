#ifndef EXCHANGEBIDHOUSELISTMESSAGE
#define EXCHANGEBIDHOUSELISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHouseListMessage : public NetworkInterface {
public:
    unsigned int id = 0;
    bool follow = false;
    unsigned int protocolId = 9068;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseListMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _followFunc(ICustomDataInput &input);
};

#endif