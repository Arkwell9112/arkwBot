#ifndef GAMECONTEXTACTORINFORMATIONS
#define GAMECONTEXTACTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "EntityLook.h"
#include "GameContextActorPositionInformations.h"

class GameContextActorInformations : public GameContextActorPositionInformations {
public:
    EntityLook look;
    unsigned int protocolId = 6228;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextActorInformations(ICustomDataInput &input);
};

#endif