#ifndef PARTYMEMBERINBREACHFIGHTMESSAGE
#define PARTYMEMBERINBREACHFIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMemberInFightMessage.h"

class PartyMemberInBreachFightMessage : public AbstractPartyMemberInFightMessage {
public:
    unsigned int floor = 0;
    unsigned int room = 0;
    unsigned int protocolId = 7452;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberInBreachFightMessage(ICustomDataInput &input);

    void _floorFunc(ICustomDataInput &input);

    void _roomFunc(ICustomDataInput &input);
};

#endif