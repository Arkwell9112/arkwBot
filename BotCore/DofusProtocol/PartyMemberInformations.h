#ifndef PARTYMEMBERINFORMATIONS
#define PARTYMEMBERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PartyEntityBaseInformation.h"
#include "PlayerStatus.h"
#include "CharacterBaseInformations.h"

class PartyMemberInformations : public CharacterBaseInformations {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;
    unsigned int initiative = 0;
    int alignmentSide = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    PlayerStatus status;
    std::vector<PartyEntityBaseInformation> entities;
    unsigned int protocolId = 213;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberInformations(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);

    void _prospectingFunc(ICustomDataInput &input);

    void _regenRateFunc(ICustomDataInput &input);

    void _initiativeFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _entitiesFunc(ICustomDataInput &input);
};

#endif