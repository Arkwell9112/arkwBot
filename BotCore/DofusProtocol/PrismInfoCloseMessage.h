#ifndef PRISMINFOCLOSEMESSAGE
#define PRISMINFOCLOSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismInfoCloseMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7904;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismInfoCloseMessage(ICustomDataInput &input);
};

#endif