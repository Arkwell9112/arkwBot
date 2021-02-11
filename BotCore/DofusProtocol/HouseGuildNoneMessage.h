#ifndef HOUSEGUILDNONEMESSAGE
#define HOUSEGUILDNONEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseGuildNoneMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    unsigned int protocolId = 7296;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseGuildNoneMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);
};

#endif