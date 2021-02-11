#ifndef EXCHANGEBIDHOUSEINLISTUPDATEDMESSAGE
#define EXCHANGEBIDHOUSEINLISTUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeBidHouseInListAddedMessage.h"

class ExchangeBidHouseInListUpdatedMessage : public ExchangeBidHouseInListAddedMessage {
public:
    unsigned int protocolId = 2152;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseInListUpdatedMessage(ICustomDataInput &input);
};

#endif