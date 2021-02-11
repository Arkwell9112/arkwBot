#ifndef GAMEMAPCHANGEORIENTATIONSMESSAGE
#define GAMEMAPCHANGEORIENTATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ActorOrientation.h"

class GameMapChangeOrientationsMessage : public NetworkInterface {
public:
    std::vector<ActorOrientation> orientations;
    unsigned int protocolId = 7791;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapChangeOrientationsMessage(ICustomDataInput &input);

    void _orientationsFunc(ICustomDataInput &input);
};

#endif