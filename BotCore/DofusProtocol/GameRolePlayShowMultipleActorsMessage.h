#ifndef GAMEROLEPLAYSHOWMULTIPLEACTORSMESSAGE
#define GAMEROLEPLAYSHOWMULTIPLEACTORSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameRolePlayActorInformations.h"

class GameRolePlayShowMultipleActorsMessage : public NetworkInterface {
public:
    std::vector<GameRolePlayActorInformations> informationsList;
    unsigned int protocolId = 1837;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayShowMultipleActorsMessage(ICustomDataInput &input);

    void _informationsListFunc(ICustomDataInput &input);
};

#endif