#ifndef GAMEACTIONFIGHTTELEPORTONSAMEMAPMESSAGE
#define GAMEACTIONFIGHTTELEPORTONSAMEMAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TeleportOnSameMapMessage.h"
#include "AbstractGameActionMessage.h"

class GameActionFightTeleportOnSameMapMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;
    unsigned int protocolId = 6358;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightTeleportOnSameMapMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif