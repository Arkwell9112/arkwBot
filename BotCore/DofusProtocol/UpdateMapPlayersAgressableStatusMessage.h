#ifndef UPDATEMAPPLAYERSAGRESSABLESTATUSMESSAGE
#define UPDATEMAPPLAYERSAGRESSABLESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class UpdateMapPlayersAgressableStatusMessage : public NetworkInterface {
public:
    std::vector<double> playerIds;
    std::vector<unsigned int> enable;
    unsigned int protocolId = 4956;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateMapPlayersAgressableStatusMessage(ICustomDataInput &input);

    void _playerIdsFunc(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif