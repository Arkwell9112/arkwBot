#ifndef GAMEROLEPLAYFIGHTREQUESTCANCELEDMESSAGE
#define GAMEROLEPLAYFIGHTREQUESTCANCELEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayFightRequestCanceledMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    double sourceId = 0;
    double targetId = 0;
    unsigned int protocolId = 3043;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayFightRequestCanceledMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif