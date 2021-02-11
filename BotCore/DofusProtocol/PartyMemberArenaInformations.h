#ifndef PARTYMEMBERARENAINFORMATIONS
#define PARTYMEMBERARENAINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "PartyMemberInformations.h"

class PartyMemberArenaInformations : public PartyMemberInformations {
public:
    unsigned int rank = 0;
    unsigned int protocolId = 6321;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberArenaInformations(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);
};

#endif