#ifndef EXCHANGEBUYOKMESSAGE
#define EXCHANGEBUYOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBuyOkMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4006;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBuyOkMessage(ICustomDataInput &input);
};

#endif