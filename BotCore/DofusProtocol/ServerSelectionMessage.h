#ifndef SERVERSELECTIONMESSAGE
#define SERVERSELECTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ServerSelectionMessage : public NetworkInterface {
public:
    unsigned int serverId = 0;
    unsigned int protocolId = 2689;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSelectionMessage(ICustomDataInput &input);

    void _serverIdFunc(ICustomDataInput &input);
};

#endif