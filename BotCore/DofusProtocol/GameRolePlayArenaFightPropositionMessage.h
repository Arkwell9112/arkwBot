#ifndef GAMEROLEPLAYARENAFIGHTPROPOSITIONMESSAGE
#define GAMEROLEPLAYARENAFIGHTPROPOSITIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameRolePlayArenaFightPropositionMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    std::vector<double> alliesId;
    unsigned int duration = 0;
    unsigned int protocolId = 1984;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaFightPropositionMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _alliesIdFunc(ICustomDataInput &input);

    void _durationFunc(ICustomDataInput &input);
};

#endif