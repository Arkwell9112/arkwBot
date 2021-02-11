#ifndef ALLIANCEBULLETINSETREQUESTMESSAGE
#define ALLIANCEBULLETINSETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "SocialNoticeSetRequestMessage.h"

class AllianceBulletinSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;
    bool notifyMembers = false;
    unsigned int protocolId = 2528;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceBulletinSetRequestMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);

    void _notifyMembersFunc(ICustomDataInput &input);
};

#endif