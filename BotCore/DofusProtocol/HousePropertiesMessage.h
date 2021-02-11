#ifndef HOUSEPROPERTIESMESSAGE
#define HOUSEPROPERTIESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HouseInstanceInformations.h"

class HousePropertiesMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    std::vector<unsigned int> doorsOnMap;
    HouseInstanceInformations properties;
    unsigned int protocolId = 6412;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HousePropertiesMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _doorsOnMapFunc(ICustomDataInput &input);
};

#endif