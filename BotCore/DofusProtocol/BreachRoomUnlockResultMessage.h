#ifndef BREACHROOMUNLOCKRESULTMESSAGE
#define BREACHROOMUNLOCKRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachRoomUnlockResultMessage : public NetworkInterface {
public:
    unsigned int roomId = 0;
    unsigned int result = 0;
    unsigned int protocolId = 2564;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRoomUnlockResultMessage(ICustomDataInput &input);

    void _roomIdFunc(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif