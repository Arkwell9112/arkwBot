#ifndef ACQUAINTANCESGETLISTMESSAGE
#define ACQUAINTANCESGETLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AcquaintancesGetListMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2342;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintancesGetListMessage(ICustomDataInput &input);
};

#endif