#ifndef FIGHTDISPELLABLEEFFECTEXTENDEDINFORMATIONS
#define FIGHTDISPELLABLEEFFECTEXTENDEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AbstractFightDispellableEffect.h"

class FightDispellableEffectExtendedInformations : public NetworkInterface {
public:
    unsigned int actionId = 0;
    double sourceId = 0;
    AbstractFightDispellableEffect effect;
    unsigned int protocolId = 7562;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightDispellableEffectExtendedInformations(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);
};

#endif