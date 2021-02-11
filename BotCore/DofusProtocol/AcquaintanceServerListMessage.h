#ifndef ACQUAINTANCESERVERLISTMESSAGE
#define ACQUAINTANCESERVERLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class AcquaintanceServerListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> servers;
    unsigned int protocolId = 5705;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceServerListMessage(ICustomDataInput &input);

    void _serversFunc(ICustomDataInput &input);
};

#endif