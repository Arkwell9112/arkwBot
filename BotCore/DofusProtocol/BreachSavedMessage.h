#ifndef BREACHSAVEDMESSAGE
#define BREACHSAVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachSavedMessage : public NetworkInterface {
public:
    bool saved = false;
    unsigned int protocolId = 5343;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachSavedMessage(ICustomDataInput &input);

    void _savedFunc(ICustomDataInput &input);
};

#endif