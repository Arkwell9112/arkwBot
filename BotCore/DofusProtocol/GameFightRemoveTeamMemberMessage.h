#ifndef GAMEFIGHTREMOVETEAMMEMBERMESSAGE
#define GAMEFIGHTREMOVETEAMMEMBERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightRemoveTeamMemberMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int teamId = 2;
    double charId = 0;
    unsigned int protocolId = 8138;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightRemoveTeamMemberMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _charIdFunc(ICustomDataInput &input);
};

#endif