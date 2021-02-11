#ifndef GAMECONTEXTMOVEELEMENTMESSAGE
#define GAMECONTEXTMOVEELEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityMovementInformations.h"

class GameContextMoveElementMessage : public NetworkInterface {
public:
    EntityMovementInformations movement;
    unsigned int protocolId = 706;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextMoveElementMessage(ICustomDataInput &input);
};

#endif