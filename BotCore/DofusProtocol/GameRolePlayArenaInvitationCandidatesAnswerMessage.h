#ifndef GAMEROLEPLAYARENAINVITATIONCANDIDATESANSWERMESSAGE
#define GAMEROLEPLAYARENAINVITATIONCANDIDATESANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "LeagueFriendInformations.h"
#include "FriendInformations.h"

class GameRolePlayArenaInvitationCandidatesAnswerMessage : public NetworkInterface {
public:
    std::vector<LeagueFriendInformations> candidates;
    unsigned int protocolId = 2383;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaInvitationCandidatesAnswerMessage(ICustomDataInput &input);

    void _candidatesFunc(ICustomDataInput &input);
};

#endif