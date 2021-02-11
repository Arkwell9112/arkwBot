#ifndef HOUSEGUILDRIGHTSVIEWMESSAGE
#define HOUSEGUILDRIGHTSVIEWMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseGuildRightsViewMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    unsigned int protocolId = 357;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseGuildRightsViewMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);
};

#endif