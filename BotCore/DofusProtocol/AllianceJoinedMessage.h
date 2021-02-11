#ifndef ALLIANCEJOINEDMESSAGE
#define ALLIANCEJOINEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AllianceInformations.h"

class AllianceJoinedMessage : public NetworkInterface {
public:
    AllianceInformations allianceInfo;
    bool enabled = false;
    unsigned int leadingGuildId = 0;
    unsigned int protocolId = 7280;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceJoinedMessage(ICustomDataInput &input);

    void _enabledFunc(ICustomDataInput &input);

    void _leadingGuildIdFunc(ICustomDataInput &input);
};

#endif