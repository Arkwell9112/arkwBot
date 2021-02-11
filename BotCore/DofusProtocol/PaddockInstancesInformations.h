#ifndef PADDOCKINSTANCESINFORMATIONS
#define PADDOCKINSTANCESINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PaddockInformations.h"
#include "PaddockBuyableInformations.h"

class PaddockInstancesInformations : public PaddockInformations {
public:
    std::vector<PaddockBuyableInformations> paddocks;
    unsigned int protocolId = 148;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockInstancesInformations(ICustomDataInput &input);

    void _paddocksFunc(ICustomDataInput &input);
};

#endif