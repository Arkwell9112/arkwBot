#ifndef HOUSEONMAPINFORMATIONS
#define HOUSEONMAPINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "HouseInstanceInformations.h"
#include "HouseInformations.h"

class HouseOnMapInformations : public HouseInformations {
public:
    std::vector<unsigned int> doorsOnMap;
    std::vector<HouseInstanceInformations> houseInstances;
    unsigned int protocolId = 4222;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseOnMapInformations(ICustomDataInput &input);

    void _doorsOnMapFunc(ICustomDataInput &input);

    void _houseInstancesFunc(ICustomDataInput &input);
};

#endif