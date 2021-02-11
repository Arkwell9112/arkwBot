#ifndef HOUSEGUILDSHAREREQUESTMESSAGE
#define HOUSEGUILDSHAREREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseGuildShareRequestMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool enable = false;
    unsigned int rights = 0;
    unsigned int protocolId = 8425;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseGuildShareRequestMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);

    void _rightsFunc(ICustomDataInput &input);
};

#endif