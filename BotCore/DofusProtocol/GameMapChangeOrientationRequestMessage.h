#ifndef GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE
#define GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameMapChangeOrientationRequestMessage : public NetworkInterface {
public:
    unsigned int direction = 1;
    unsigned int protocolId = 2851;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapChangeOrientationRequestMessage(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);
};

#endif