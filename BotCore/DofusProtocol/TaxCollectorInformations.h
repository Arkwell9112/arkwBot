#ifndef TAXCOLLECTORINFORMATIONS
#define TAXCOLLECTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "TaxCollectorComplementaryInformations.h"
#include "AdditionalTaxCollectorInformations.h"
#include "EntityLook.h"

class TaxCollectorInformations : public NetworkInterface {
public:
    double uniqueId = 0;
    unsigned int firtNameId = 0;
    unsigned int lastNameId = 0;
    AdditionalTaxCollectorInformations additionalInfos;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    unsigned int state = 0;
    EntityLook look;
    std::vector<TaxCollectorComplementaryInformations> complements;
    unsigned int protocolId = 5143;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorInformations(ICustomDataInput &input);

    void _uniqueIdFunc(ICustomDataInput &input);

    void _firtNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);

    void _complementsFunc(ICustomDataInput &input);
};

#endif