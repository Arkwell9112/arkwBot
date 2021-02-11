#ifndef PRISMINFOJOINLEAVEREQUESTMESSAGE
#define PRISMINFOJOINLEAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismInfoJoinLeaveRequestMessage : public NetworkInterface {
public:
    bool join = false;
    unsigned int protocolId = 4898;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismInfoJoinLeaveRequestMessage(ICustomDataInput &input);

    void _joinFunc(ICustomDataInput &input);
};

#endif