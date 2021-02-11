#ifndef EMOTEPLAYREQUESTMESSAGE
#define EMOTEPLAYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EmotePlayRequestMessage : public NetworkInterface {
public:
    unsigned int emoteId = 0;
    unsigned int protocolId = 6265;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmotePlayRequestMessage(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);
};

#endif