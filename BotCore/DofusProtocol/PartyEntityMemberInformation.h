#ifndef PARTYENTITYMEMBERINFORMATION
#define PARTYENTITYMEMBERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "PartyEntityBaseInformation.h"

class PartyEntityMemberInformation : public PartyEntityBaseInformation {
public:
    unsigned int initiative = 0;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;
    unsigned int protocolId = 6554;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyEntityMemberInformation(ICustomDataInput &input);

    void _initiativeFunc(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);

    void _prospectingFunc(ICustomDataInput &input);

    void _regenRateFunc(ICustomDataInput &input);
};

#endif