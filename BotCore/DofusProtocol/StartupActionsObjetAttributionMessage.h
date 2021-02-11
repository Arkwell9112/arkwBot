#ifndef STARTUPACTIONSOBJETATTRIBUTIONMESSAGE
#define STARTUPACTIONSOBJETATTRIBUTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StartupActionsObjetAttributionMessage : public NetworkInterface {
public:
    unsigned int actionId = 0;
    double characterId = 0;
    unsigned int protocolId = 1229;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionsObjetAttributionMessage(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);
};

#endif