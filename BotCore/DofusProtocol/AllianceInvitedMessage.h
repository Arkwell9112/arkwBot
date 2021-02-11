#ifndef ALLIANCEINVITEDMESSAGE
#define ALLIANCEINVITEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"

class AllianceInvitedMessage : public NetworkInterface {
public:
    double recruterId = 0;
    std::string recruterName;
    BasicNamedAllianceInformations allianceInfo;
    unsigned int protocolId = 5577;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInvitedMessage(ICustomDataInput &input);

    void _recruterIdFunc(ICustomDataInput &input);

    void _recruterNameFunc(ICustomDataInput &input);
};

#endif