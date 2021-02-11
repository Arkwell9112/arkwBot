#ifndef GAMEROLEPLAYARENASWITCHTOFIGHTSERVERMESSAGE
#define GAMEROLEPLAYARENASWITCHTOFIGHTSERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class GameRolePlayArenaSwitchToFightServerMessage : public NetworkInterface {
public:
    std::string address;
    std::vector<unsigned int> ports;
    std::vector<int> ticket;
    unsigned int protocolId = 8721;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaSwitchToFightServerMessage(ICustomDataInput &input);

    void _addressFunc(ICustomDataInput &input);

    void _portsFunc(ICustomDataInput &input);

    void _ticketFunc(ICustomDataInput &input);
};

#endif