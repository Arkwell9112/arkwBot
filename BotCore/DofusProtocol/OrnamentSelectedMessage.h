#ifndef ORNAMENTSELECTEDMESSAGE
#define ORNAMENTSELECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OrnamentSelectedMessage : public NetworkInterface {
public:
    unsigned int ornamentId = 0;
    unsigned int protocolId = 682;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OrnamentSelectedMessage(ICustomDataInput &input);

    void _ornamentIdFunc(ICustomDataInput &input);
};

#endif