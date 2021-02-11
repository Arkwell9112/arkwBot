#ifndef GAMEMAPCHANGEORIENTATIONMESSAGE
#define GAMEMAPCHANGEORIENTATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ActorOrientation.h"

class GameMapChangeOrientationMessage : public NetworkInterface {
public:
    ActorOrientation orientation;
    unsigned int protocolId = 3503;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapChangeOrientationMessage(ICustomDataInput &input);
};

#endif