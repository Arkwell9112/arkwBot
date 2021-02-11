#ifndef TAXCOLLECTORBASICINFORMATIONS
#define TAXCOLLECTORBASICINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TaxCollectorBasicInformations : public NetworkInterface {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    unsigned int protocolId = 6946;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorBasicInformations(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif