#ifndef PARTYIDOL
#define PARTYIDOL

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Idol.h"

class PartyIdol : public Idol {
public:
    std::vector<double> ownersIds;
    unsigned int protocolId = 1051;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyIdol(ICustomDataInput &input);

    void _ownersIdsFunc(ICustomDataInput &input);
};

#endif