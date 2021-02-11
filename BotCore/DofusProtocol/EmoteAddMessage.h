#ifndef EMOTEADDMESSAGE
#define EMOTEADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EmoteAddMessage : public NetworkInterface {
public:
    unsigned int emoteId = 0;
    unsigned int protocolId = 2415;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmoteAddMessage(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);
};

#endif