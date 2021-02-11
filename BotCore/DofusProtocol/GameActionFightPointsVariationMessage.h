#ifndef GAMEACTIONFIGHTPOINTSVARIATIONMESSAGE
#define GAMEACTIONFIGHTPOINTSVARIATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightPointsVariationMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int delta = 0;
    unsigned int protocolId = 8093;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightPointsVariationMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _deltaFunc(ICustomDataInput &input);
};

#endif