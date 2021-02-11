#ifndef CURRENTSERVERSTATUSUPDATEMESSAGE
#define CURRENTSERVERSTATUSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ServerStatusUpdateMessage.h"

class CurrentServerStatusUpdateMessage : public NetworkInterface {
public:
    unsigned int status = 1;
    unsigned int protocolId = 1870;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CurrentServerStatusUpdateMessage(ICustomDataInput &input);

    void _statusFunc(ICustomDataInput &input);
};

#endif