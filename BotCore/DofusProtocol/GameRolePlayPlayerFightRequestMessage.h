#ifndef GAMEROLEPLAYPLAYERFIGHTREQUESTMESSAGE
#define GAMEROLEPLAYPLAYERFIGHTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayPlayerFightRequestMessage : public NetworkInterface {
public:
    double targetId = 0;
    int targetCellId = 0;
    bool friendly = false;
    unsigned int protocolId = 6127;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPlayerFightRequestMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _targetCellIdFunc(ICustomDataInput &input);

    void _friendlyFunc(ICustomDataInput &input);
};

#endif