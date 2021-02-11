#ifndef SELECTEDSERVERREFUSEDMESSAGE
#define SELECTEDSERVERREFUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SelectedServerRefusedMessage : public NetworkInterface {
public:
    unsigned int serverId = 0;
    unsigned int error = 1;
    unsigned int serverStatus = 1;
    unsigned int protocolId = 8662;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SelectedServerRefusedMessage(ICustomDataInput &input);

    void _serverIdFunc(ICustomDataInput &input);

    void _errorFunc(ICustomDataInput &input);

    void _serverStatusFunc(ICustomDataInput &input);
};

#endif