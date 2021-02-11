#ifndef FIGHTENTITYDISPOSITIONINFORMATIONS
#define FIGHTENTITYDISPOSITIONINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "EntityDispositionInformations.h"

class FightEntityDispositionInformations : public EntityDispositionInformations {
public:
    double carryingCharacterId = 0;
    unsigned int protocolId = 8186;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightEntityDispositionInformations(ICustomDataInput &input);

    void _carryingCharacterIdFunc(ICustomDataInput &input);
};

#endif