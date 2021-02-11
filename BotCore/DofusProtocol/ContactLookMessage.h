#ifndef CONTACTLOOKMESSAGE
#define CONTACTLOOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "EntityLook.h"

class ContactLookMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    std::string playerName;
    double playerId = 0;
    EntityLook look;
    unsigned int protocolId = 6459;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactLookMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif