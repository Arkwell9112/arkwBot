#ifndef PRISMFIGHTJOINLEAVEREQUESTMESSAGE
#define PRISMFIGHTJOINLEAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismFightJoinLeaveRequestMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    bool join = false;
    unsigned int protocolId = 6225;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightJoinLeaveRequestMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _joinFunc(ICustomDataInput &input);
};

#endif