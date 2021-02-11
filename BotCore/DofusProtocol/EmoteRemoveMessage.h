#ifndef EMOTEREMOVEMESSAGE
#define EMOTEREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EmoteRemoveMessage : public NetworkInterface {
public:
    unsigned int emoteId = 0;
    unsigned int protocolId = 8092;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmoteRemoveMessage(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);
};

#endif