#ifndef EXCHANGEBIDSEARCHOKMESSAGE
#define EXCHANGEBIDSEARCHOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidSearchOkMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6831;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidSearchOkMessage(ICustomDataInput &input);
};

#endif