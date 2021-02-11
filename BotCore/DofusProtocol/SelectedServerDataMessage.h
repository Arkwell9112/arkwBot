#ifndef SELECTEDSERVERDATAMESSAGE
#define SELECTEDSERVERDATAMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class SelectedServerDataMessage : public NetworkInterface {
public:
    unsigned int serverId = 0;
    std::string address;
    std::vector<unsigned int> ports;
    bool canCreateNewCharacter = false;
    std::vector<int> ticket;
    unsigned int protocolId = 7693;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SelectedServerDataMessage(ICustomDataInput &input);

    void _serverIdFunc(ICustomDataInput &input);

    void _addressFunc(ICustomDataInput &input);

    void _portsFunc(ICustomDataInput &input);

    void _canCreateNewCharacterFunc(ICustomDataInput &input);

    void _ticketFunc(ICustomDataInput &input);
};

#endif