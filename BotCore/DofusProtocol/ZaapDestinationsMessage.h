#ifndef ZAAPDESTINATIONSMESSAGE
#define ZAAPDESTINATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TeleportDestination.h"
#include "TeleportDestinationsMessage.h"

class ZaapDestinationsMessage : public TeleportDestinationsMessage {
public:
    double spawnMapId = 0;
    unsigned int protocolId = 2663;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ZaapDestinationsMessage(ICustomDataInput &input);

    void _spawnMapIdFunc(ICustomDataInput &input);
};

#endif