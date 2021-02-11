#ifndef GAMEMAPMOVEMENTREQUESTMESSAGE
#define GAMEMAPMOVEMENTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "../Packet.h"
#include <vector>
#include <list>

class GameMapMovementRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> keyMovements;
    double mapId = 0;
    unsigned int protocolId = 2501;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapMovementRequestMessage(ICustomDataInput &input);

    void _keyMovementsFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif