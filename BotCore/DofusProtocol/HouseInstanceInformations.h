#ifndef HOUSEINSTANCEINFORMATIONS
#define HOUSEINSTANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HouseInstanceInformations : public NetworkInterface {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    bool isLocked = false;
    std::string ownerName;
    double price = 0;
    bool isSaleLocked = false;
    unsigned int protocolId = 1681;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseInstanceInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _ownerNameFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif