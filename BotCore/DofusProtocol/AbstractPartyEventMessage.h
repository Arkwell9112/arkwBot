#ifndef ABSTRACTPARTYEVENTMESSAGE
#define ABSTRACTPARTYEVENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class AbstractPartyEventMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 1574;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractPartyEventMessage(ICustomDataInput &input);
};

#endif