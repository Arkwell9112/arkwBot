#ifndef GAMEROLEPLAYDELAYEDOBJECTUSEMESSAGE
#define GAMEROLEPLAYDELAYEDOBJECTUSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayDelayedActionMessage.h"
#include "ObjectUseMessage.h"

class GameRolePlayDelayedObjectUseMessage : public GameRolePlayDelayedActionMessage {
public:
    unsigned int objectGID = 0;
    unsigned int protocolId = 7437;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayDelayedObjectUseMessage(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);
};

#endif