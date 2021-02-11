#ifndef SERVERSTATUSUPDATEMESSAGE
#define SERVERSTATUSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GameServerInformations.h"

class ServerStatusUpdateMessage : public NetworkInterface {
public:
    GameServerInformations server;
    unsigned int protocolId = 3755;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerStatusUpdateMessage(ICustomDataInput &input);
};

#endif