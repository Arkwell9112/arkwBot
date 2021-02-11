#ifndef PRISMSLISTUPDATEMESSAGE
#define PRISMSLISTUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PrismsListMessage.h"

class PrismsListUpdateMessage : public PrismsListMessage {
public:
    unsigned int protocolId = 3070;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismsListUpdateMessage(ICustomDataInput &input);
};

#endif