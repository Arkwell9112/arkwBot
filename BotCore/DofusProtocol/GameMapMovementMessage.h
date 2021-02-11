#ifndef GAMEMAPMOVEMENTMESSAGE
#define GAMEMAPMOVEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameMapMovementMessage : public NetworkInterface {
public:
    std::vector<unsigned int> keyMovements;
    int forcedDirection = 0;
    double actorId = 0;
    unsigned int protocolId = 9211;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapMovementMessage(ICustomDataInput &input);

    void _keyMovementsFunc(ICustomDataInput &input);

    void _forcedDirectionFunc(ICustomDataInput &input);

    void _actorIdFunc(ICustomDataInput &input);
};

#endif