#ifndef PARTYUPDATELIGHTMESSAGE
#define PARTYUPDATELIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyEventMessage.h"

class PartyUpdateLightMessage : public AbstractPartyEventMessage {
public:
    double id = 0;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int prospecting = 0;
    unsigned int regenRate = 0;
    unsigned int protocolId = 9401;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyUpdateLightMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);

    void _prospectingFunc(ICustomDataInput &input);

    void _regenRateFunc(ICustomDataInput &input);
};

#endif