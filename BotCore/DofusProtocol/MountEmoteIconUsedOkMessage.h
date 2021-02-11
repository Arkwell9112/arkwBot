#ifndef MOUNTEMOTEICONUSEDOKMESSAGE
#define MOUNTEMOTEICONUSEDOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountEmoteIconUsedOkMessage : public NetworkInterface {
public:
    int mountId = 0;
    unsigned int reactionType = 0;
    unsigned int protocolId = 612;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountEmoteIconUsedOkMessage(ICustomDataInput &input);

    void _mountIdFunc(ICustomDataInput &input);

    void _reactionTypeFunc(ICustomDataInput &input);
};

#endif