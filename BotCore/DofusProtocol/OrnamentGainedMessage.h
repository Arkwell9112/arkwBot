#ifndef ORNAMENTGAINEDMESSAGE
#define ORNAMENTGAINEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OrnamentGainedMessage : public NetworkInterface {
public:
    unsigned int ornamentId = 0;
    unsigned int protocolId = 3416;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OrnamentGainedMessage(ICustomDataInput &input);

    void _ornamentIdFunc(ICustomDataInput &input);
};

#endif