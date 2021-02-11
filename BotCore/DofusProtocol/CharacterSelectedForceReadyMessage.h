#ifndef CHARACTERSELECTEDFORCEREADYMESSAGE
#define CHARACTERSELECTEDFORCEREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterSelectedForceReadyMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3810;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectedForceReadyMessage(ICustomDataInput &input);
};

#endif