#ifndef PARTYMEMBERINSTANDARDFIGHTMESSAGE
#define PARTYMEMBERINSTANDARDFIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMemberInFightMessage.h"
#include "MapCoordinatesExtended.h"
#include "MapCoordinates.h"

class PartyMemberInStandardFightMessage : public AbstractPartyMemberInFightMessage {
public:
    MapCoordinatesExtended fightMap;
    unsigned int protocolId = 8856;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberInStandardFightMessage(ICustomDataInput &input);
};

#endif