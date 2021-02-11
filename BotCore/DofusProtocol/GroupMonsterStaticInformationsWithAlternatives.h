#ifndef GROUPMONSTERSTATICINFORMATIONSWITHALTERNATIVES
#define GROUPMONSTERSTATICINFORMATIONSWITHALTERNATIVES

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GroupMonsterStaticInformations.h"
#include "AlternativeMonstersInGroupLightInformations.h"

class GroupMonsterStaticInformationsWithAlternatives : public GroupMonsterStaticInformations {
public:
    std::vector<AlternativeMonstersInGroupLightInformations> alternatives;
    unsigned int protocolId = 7681;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GroupMonsterStaticInformationsWithAlternatives(ICustomDataInput &input);

    void _alternativesFunc(ICustomDataInput &input);
};

#endif