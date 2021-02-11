#include "MonsterInGroupInformations.h"

void MonsterInGroupInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MonsterInGroupInformations(input);
}

void MonsterInGroupInformations::deserializeAs_MonsterInGroupInformations(ICustomDataInput &input) {
    MonsterInGroupLightInformations::deserialize(input);
    this->look.deserialize(input);
}

