#ifndef GAMEROLEPLAYMERCHANTINFORMATIONS
#define GAMEROLEPLAYMERCHANTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "HumanOption.h"
#include "GameRolePlayNamedActorInformations.h"

class GameRolePlayMerchantInformations : public GameRolePlayNamedActorInformations {
public:
    unsigned int sellType = 0;
    std::vector<HumanOption> options;
    unsigned int protocolId = 9317;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayMerchantInformations(ICustomDataInput &input);

    void _sellTypeFunc(ICustomDataInput &input);

    void _optionsFunc(ICustomDataInput &input);
};

#endif