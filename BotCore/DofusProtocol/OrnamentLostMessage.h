#ifndef ORNAMENTLOSTMESSAGE
#define ORNAMENTLOSTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OrnamentLostMessage : public NetworkInterface {
public:
    unsigned int ornamentId = 0;
    unsigned int protocolId = 4164;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OrnamentLostMessage(ICustomDataInput &input);

    void _ornamentIdFunc(ICustomDataInput &input);
};

#endif