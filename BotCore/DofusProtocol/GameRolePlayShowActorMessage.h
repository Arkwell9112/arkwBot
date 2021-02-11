#ifndef GAMEROLEPLAYSHOWACTORMESSAGE
#define GAMEROLEPLAYSHOWACTORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GameRolePlayActorInformations.h"

class GameRolePlayShowActorMessage : public NetworkInterface {
public:
    GameRolePlayActorInformations informations;
    unsigned int protocolId = 6607;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayShowActorMessage(ICustomDataInput &input);
};

#endif