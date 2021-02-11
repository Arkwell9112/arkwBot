#ifndef EXCHANGEBIDHOUSEBUYRESULTMESSAGE
#define EXCHANGEBIDHOUSEBUYRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "HouseBuyResultMessage.h"

class ExchangeBidHouseBuyResultMessage : public NetworkInterface {
public:
    unsigned int uid = 0;
    bool bought = false;
    unsigned int protocolId = 9493;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseBuyResultMessage(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);

    void _boughtFunc(ICustomDataInput &input);
};

#endif