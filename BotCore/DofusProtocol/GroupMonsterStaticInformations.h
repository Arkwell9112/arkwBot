#ifndef GROUPMONSTERSTATICINFORMATIONS
#define GROUPMONSTERSTATICINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MonsterInGroupLightInformations.h"
#include "MonsterInGroupInformations.h"

class GroupMonsterStaticInformations : public NetworkInterface {
public:
    MonsterInGroupLightInformations mainCreatureLightInfos;
    std::vector<MonsterInGroupInformations> underlings;
    unsigned int protocolId = 5768;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GroupMonsterStaticInformations(ICustomDataInput &input);

    void _underlingsFunc(ICustomDataInput &input);
};

#endif