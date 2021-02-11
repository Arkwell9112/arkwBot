#ifndef TAXCOLLECTORLOOTINFORMATIONS
#define TAXCOLLECTORLOOTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorComplementaryInformations.h"

class TaxCollectorLootInformations : public TaxCollectorComplementaryInformations {
public:
    double kamas = 0;
    double experience = 0;
    unsigned int pods = 0;
    double itemsValue = 0;
    unsigned int protocolId = 2162;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorLootInformations(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _podsFunc(ICustomDataInput &input);

    void _itemsValueFunc(ICustomDataInput &input);
};

#endif