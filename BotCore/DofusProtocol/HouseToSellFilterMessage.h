#ifndef HOUSETOSELLFILTERMESSAGE
#define HOUSETOSELLFILTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseToSellFilterMessage : public NetworkInterface {
public:
    int areaId = 0;
    unsigned int atLeastNbRoom = 0;
    unsigned int atLeastNbChest = 0;
    unsigned int skillRequested = 0;
    double maxPrice = 0;
    unsigned int orderBy = 0;
    unsigned int protocolId = 9833;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseToSellFilterMessage(ICustomDataInput &input);

    void _areaIdFunc(ICustomDataInput &input);

    void _atLeastNbRoomFunc(ICustomDataInput &input);

    void _atLeastNbChestFunc(ICustomDataInput &input);

    void _skillRequestedFunc(ICustomDataInput &input);

    void _maxPriceFunc(ICustomDataInput &input);

    void _orderByFunc(ICustomDataInput &input);
};

#endif