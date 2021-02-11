#ifndef PARTYINVITATIONMEMBERINFORMATIONS
#define PARTYINVITATIONMEMBERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PartyEntityBaseInformation.h"
#include "CharacterBaseInformations.h"

class PartyInvitationMemberInformations : public CharacterBaseInformations {
public:
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::vector<PartyEntityBaseInformation> entities;
    unsigned int protocolId = 7121;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationMemberInformations(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _entitiesFunc(ICustomDataInput &input);
};

#endif