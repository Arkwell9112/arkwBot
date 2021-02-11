#ifndef BREACHBRANCHESMESSAGE
#define BREACHBRANCHESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ExtendedBreachBranch.h"
#include "BreachBranch.h"

class BreachBranchesMessage : public NetworkInterface {
public:
    std::vector<ExtendedBreachBranch> branches;
    unsigned int protocolId = 2174;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachBranchesMessage(ICustomDataInput &input);

    void _branchesFunc(ICustomDataInput &input);
};

#endif