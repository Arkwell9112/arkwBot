#ifndef SERVERSLISTMESSAGE
#define SERVERSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameServerInformations.h"

class ServersListMessage : public NetworkInterface {
public:
    std::vector<GameServerInformations> servers;
    unsigned int alreadyConnectedToServerId = 0;
    bool canCreateNewCharacter = false;
    unsigned int protocolId = 5241;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServersListMessage(ICustomDataInput &input);

    void _serversFunc(ICustomDataInput &input);

    void _alreadyConnectedToServerIdFunc(ICustomDataInput &input);

    void _canCreateNewCharacterFunc(ICustomDataInput &input);
};

#endif