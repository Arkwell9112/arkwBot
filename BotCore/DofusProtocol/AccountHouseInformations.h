#ifndef ACCOUNTHOUSEINFORMATIONS
#define ACCOUNTHOUSEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "HouseInstanceInformations.h"
#include "HouseInformations.h"

class AccountHouseInformations : public HouseInformations {
public:
    HouseInstanceInformations houseInfos;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    unsigned int protocolId = 8630;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountHouseInformations(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif