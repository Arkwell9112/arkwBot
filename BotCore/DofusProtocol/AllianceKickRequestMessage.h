#ifndef ALLIANCEKICKREQUESTMESSAGE
#define ALLIANCEKICKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceKickRequestMessage : public NetworkInterface {
public:
    unsigned int kickedId = 0;
    unsigned int protocolId = 4617;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceKickRequestMessage(ICustomDataInput &input);

    void _kickedIdFunc(ICustomDataInput &input);
};

#endif