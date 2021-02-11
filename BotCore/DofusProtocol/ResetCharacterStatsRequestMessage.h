#ifndef RESETCHARACTERSTATSREQUESTMESSAGE
#define RESETCHARACTERSTATSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ResetCharacterStatsRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9229;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ResetCharacterStatsRequestMessage(ICustomDataInput &input);
};

#endif