#ifndef INTERACTIVEUSEENDEDMESSAGE
#define INTERACTIVEUSEENDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InteractiveUseEndedMessage : public NetworkInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillId = 0;
    unsigned int protocolId = 534;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveUseEndedMessage(ICustomDataInput &input);

    void _elemIdFunc(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);
};

#endif