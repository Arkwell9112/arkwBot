#ifndef GUILDFIGHTLEAVEREQUESTMESSAGE
#define GUILDFIGHTLEAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFightLeaveRequestMessage : public NetworkInterface {
public:
    double taxCollectorId = 0;
    double characterId = 0;
    unsigned int protocolId = 5559;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightLeaveRequestMessage(ICustomDataInput &input);

    void _taxCollectorIdFunc(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);
};

#endif