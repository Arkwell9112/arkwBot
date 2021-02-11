#ifndef ALLIANCEINVITATIONANSWERMESSAGE
#define ALLIANCEINVITATIONANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceInvitationAnswerMessage : public NetworkInterface {
public:
    bool accept = false;
    unsigned int protocolId = 4548;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInvitationAnswerMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif