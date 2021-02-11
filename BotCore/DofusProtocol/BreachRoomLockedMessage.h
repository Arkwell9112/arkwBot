#ifndef BREACHROOMLOCKEDMESSAGE
#define BREACHROOMLOCKEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachRoomLockedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4565;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRoomLockedMessage(ICustomDataInput &input);
};

#endif