#ifndef HOUSEKICKREQUESTMESSAGE
#define HOUSEKICKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseKickRequestMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 9543;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseKickRequestMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif