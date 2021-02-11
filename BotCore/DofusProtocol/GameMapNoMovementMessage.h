#ifndef GAMEMAPNOMOVEMENTMESSAGE
#define GAMEMAPNOMOVEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameMapNoMovementMessage : public NetworkInterface {
public:
    int cellX = 0;
    int cellY = 0;
    unsigned int protocolId = 5197;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapNoMovementMessage(ICustomDataInput &input);

    void _cellXFunc(ICustomDataInput &input);

    void _cellYFunc(ICustomDataInput &input);
};

#endif