#ifndef UPDATEMOUNTCHARACTERISTICSMESSAGE
#define UPDATEMOUNTCHARACTERISTICSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "UpdateMountCharacteristic.h"

class UpdateMountCharacteristicsMessage : public NetworkInterface {
public:
    int rideId = 0;
    std::vector<UpdateMountCharacteristic> boostToUpdateList;
    unsigned int protocolId = 1682;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateMountCharacteristicsMessage(ICustomDataInput &input);

    void _rideIdFunc(ICustomDataInput &input);

    void _boostToUpdateListFunc(ICustomDataInput &input);
};

#endif