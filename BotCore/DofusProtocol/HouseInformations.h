#ifndef HOUSEINFORMATIONS
#define HOUSEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseInformations : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int modelId = 0;
    unsigned int protocolId = 9215;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseInformations(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _modelIdFunc(ICustomDataInput &input);
};

#endif