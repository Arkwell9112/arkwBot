#ifndef PADDOCKINFORMATIONS
#define PADDOCKINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class PaddockInformations : public NetworkInterface {
public:
    unsigned int maxOutdoorMount = 0;
    unsigned int maxItems = 0;
    unsigned int protocolId = 7706;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockInformations(ICustomDataInput &input);

    void _maxOutdoorMountFunc(ICustomDataInput &input);

    void _maxItemsFunc(ICustomDataInput &input);
};

#endif