#ifndef PRISMINFOINVALIDMESSAGE
#define PRISMINFOINVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismInfoInValidMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 2104;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismInfoInValidMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif