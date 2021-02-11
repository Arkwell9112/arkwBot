#ifndef RELOGINTOKENREQUESTMESSAGE
#define RELOGINTOKENREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ReloginTokenRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8988;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ReloginTokenRequestMessage(ICustomDataInput &input);
};

#endif