#ifndef MONSTERINGROUPINFORMATIONS
#define MONSTERINGROUPINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "MonsterInGroupLightInformations.h"
#include "EntityLook.h"

class MonsterInGroupInformations : public MonsterInGroupLightInformations {
public:
    EntityLook look;
    unsigned int protocolId = 8376;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MonsterInGroupInformations(ICustomDataInput &input);
};

#endif