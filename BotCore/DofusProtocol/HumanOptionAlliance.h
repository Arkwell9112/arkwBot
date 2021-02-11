#ifndef HUMANOPTIONALLIANCE
#define HUMANOPTIONALLIANCE

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"
#include "AllianceInformations.h"

class HumanOptionAlliance : public HumanOption {
public:
    AllianceInformations allianceInformations;
    unsigned int aggressable = 0;
    unsigned int protocolId = 4941;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionAlliance(ICustomDataInput &input);

    void _aggressableFunc(ICustomDataInput &input);
};

#endif