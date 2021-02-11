#ifndef BREACHROOMUNLOCKREQUESTMESSAGE
#define BREACHROOMUNLOCKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachRoomUnlockRequestMessage : public NetworkInterface {
public:
    unsigned int roomId = 0;
    unsigned int protocolId = 6468;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRoomUnlockRequestMessage(ICustomDataInput &input);

    void _roomIdFunc(ICustomDataInput &input);
};

#endif