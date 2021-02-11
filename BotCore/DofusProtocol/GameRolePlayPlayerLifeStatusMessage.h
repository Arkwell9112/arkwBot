#ifndef GAMEROLEPLAYPLAYERLIFESTATUSMESSAGE
#define GAMEROLEPLAYPLAYERLIFESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayPlayerLifeStatusMessage : public NetworkInterface {
public:
    unsigned int state = 0;
    double phenixMapId = 0;
    unsigned int protocolId = 4394;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPlayerLifeStatusMessage(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);

    void _phenixMapIdFunc(ICustomDataInput &input);
};

#endif