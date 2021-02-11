#ifndef GAMEFIGHTTURNLISTMESSAGE
#define GAMEFIGHTTURNLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameFightTurnListMessage : public NetworkInterface {
public:
    std::vector<double> ids;
    std::vector<double> deadsIds;
    unsigned int protocolId = 3491;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnListMessage(ICustomDataInput &input);

    void _idsFunc(ICustomDataInput &input);

    void _deadsIdsFunc(ICustomDataInput &input);
};

#endif