#ifndef EMOTEPLAYABSTRACTMESSAGE
#define EMOTEPLAYABSTRACTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EmotePlayAbstractMessage : public NetworkInterface {
public:
    unsigned int emoteId = 0;
    double emoteStartTime = 0;
    unsigned int protocolId = 6839;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmotePlayAbstractMessage(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);

    void _emoteStartTimeFunc(ICustomDataInput &input);
};

#endif