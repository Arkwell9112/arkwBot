#ifndef PRISMATTACKREQUESTMESSAGE
#define PRISMATTACKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismAttackRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1810;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismAttackRequestMessage(ICustomDataInput &input);
};

#endif