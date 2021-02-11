#ifndef CHANGEMAPMESSAGE
#define CHANGEMAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "../Packet.h"

class ChangeMapMessage : public NetworkInterface {
public:
    double mapId = 0;
    bool autopilot = false;
    unsigned int protocolId = 2677;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChangeMapMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _autopilotFunc(ICustomDataInput &input);

    static Packet serialize(double mapID);
};

#endif