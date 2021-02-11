#ifndef GAMEACTIONACKNOWLEDGEMENTMESSAGE
#define GAMEACTIONACKNOWLEDGEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionAcknowledgementMessage : public NetworkInterface {
public:
    bool valid = false;
    int actionId = 0;
    unsigned int protocolId = 9063;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionAcknowledgementMessage(ICustomDataInput &input);

    void _validFunc(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);
};

#endif