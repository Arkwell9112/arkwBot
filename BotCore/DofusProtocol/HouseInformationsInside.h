#ifndef HOUSEINFORMATIONSINSIDE
#define HOUSEINFORMATIONSINSIDE

#include "../IO/ICustomDataInput.h"
#include "HouseInstanceInformations.h"
#include "HouseInformations.h"

class HouseInformationsInside : public HouseInformations {
public:
    HouseInstanceInformations houseInfos;
    int worldX = 0;
    int worldY = 0;
    unsigned int protocolId = 6405;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseInformationsInside(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);
};

#endif