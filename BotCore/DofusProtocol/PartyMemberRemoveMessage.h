#ifndef PARTYMEMBERREMOVEMESSAGE
#define PARTYMEMBERREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyEventMessage.h"

class PartyMemberRemoveMessage : public AbstractPartyEventMessage {
public:
    double leavingPlayerId = 0;
    unsigned int protocolId = 6698;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberRemoveMessage(ICustomDataInput &input);

    void _leavingPlayerIdFunc(ICustomDataInput &input);
};

#endif