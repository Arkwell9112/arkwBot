#ifndef CHALLENGEFIGHTJOINREFUSEDMESSAGE
#define CHALLENGEFIGHTJOINREFUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChallengeFightJoinRefusedMessage : public NetworkInterface {
public:
    double playerId = 0;
    int reason = 0;
    unsigned int protocolId = 4427;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeFightJoinRefusedMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif