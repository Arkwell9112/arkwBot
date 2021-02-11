#ifndef GUILDHOUSEREMOVEMESSAGE
#define GUILDHOUSEREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildHouseRemoveMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    unsigned int protocolId = 7602;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildHouseRemoveMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);
};

#endif