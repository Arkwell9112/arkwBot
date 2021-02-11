#ifndef STARTUPACTIONSALLATTRIBUTIONMESSAGE
#define STARTUPACTIONSALLATTRIBUTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StartupActionsAllAttributionMessage : public NetworkInterface {
public:
    double characterId = 0;
    unsigned int protocolId = 2239;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionsAllAttributionMessage(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);
};

#endif