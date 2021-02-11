#ifndef EMOTEPLAYMESSAGE
#define EMOTEPLAYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "EmotePlayAbstractMessage.h"

class EmotePlayMessage : public EmotePlayAbstractMessage {
public:
    double actorId = 0;
    unsigned int accountId = 0;
    unsigned int protocolId = 5928;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmotePlayMessage(ICustomDataInput &input);

    void _actorIdFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);
};

#endif