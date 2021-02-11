#ifndef KAMASUPDATEMESSAGE
#define KAMASUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class KamasUpdateMessage : public NetworkInterface {
public:
    double kamasTotal = 0;
    unsigned int protocolId = 6196;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_KamasUpdateMessage(ICustomDataInput &input);

    void _kamasTotalFunc(ICustomDataInput &input);
};

#endif