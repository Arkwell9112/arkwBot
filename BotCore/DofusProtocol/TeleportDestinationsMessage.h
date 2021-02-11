#ifndef TELEPORTDESTINATIONSMESSAGE
#define TELEPORTDESTINATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "TeleportDestination.h"

class TeleportDestinationsMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    std::vector<TeleportDestination> destinations;
    unsigned int protocolId = 101;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportDestinationsMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _destinationsFunc(ICustomDataInput &input);
};

#endif