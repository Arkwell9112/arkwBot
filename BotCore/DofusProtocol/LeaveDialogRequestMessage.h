#ifndef LEAVEDIALOGREQUESTMESSAGE
#define LEAVEDIALOGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LeaveDialogRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2626;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LeaveDialogRequestMessage(ICustomDataInput &input);
};

#endif