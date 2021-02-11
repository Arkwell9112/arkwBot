#ifndef EMOTEPLAYERRORMESSAGE
#define EMOTEPLAYERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EmotePlayErrorMessage : public NetworkInterface {
public:
    unsigned int emoteId = 0;
    unsigned int protocolId = 5039;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmotePlayErrorMessage(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);
};

#endif