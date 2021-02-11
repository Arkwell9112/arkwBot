#ifndef GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE
#define GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "EntityMovementInformations.h"

class GameContextMoveMultipleElementsMessage : public NetworkInterface {
public:
    std::vector<EntityMovementInformations> movements;
    unsigned int protocolId = 3081;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextMoveMultipleElementsMessage(ICustomDataInput &input);

    void _movementsFunc(ICustomDataInput &input);
};

#endif