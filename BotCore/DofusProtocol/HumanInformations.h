#ifndef HUMANINFORMATIONS
#define HUMANINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HumanOption.h"
#include "ActorRestrictionsInformations.h"

class HumanInformations : public NetworkInterface {
public:
    ActorRestrictionsInformations restrictions;
    bool sex = false;
    std::vector<HumanOption> options;
    unsigned int protocolId = 6717;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanInformations(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _optionsFunc(ICustomDataInput &input);
};

#endif