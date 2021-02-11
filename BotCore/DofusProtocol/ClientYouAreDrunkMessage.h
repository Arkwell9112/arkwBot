#ifndef CLIENTYOUAREDRUNKMESSAGE
#define CLIENTYOUAREDRUNKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "DebugInClientMessage.h"

class ClientYouAreDrunkMessage : public DebugInClientMessage {
public:
    unsigned int protocolId = 6551;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ClientYouAreDrunkMessage(ICustomDataInput &input);
};

#endif