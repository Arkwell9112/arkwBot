#ifndef LEAVEDIALOGMESSAGE
#define LEAVEDIALOGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LeaveDialogMessage : public NetworkInterface {
public:
    unsigned int dialogType = 0;
    unsigned int protocolId = 3299;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LeaveDialogMessage(ICustomDataInput &input);

    void _dialogTypeFunc(ICustomDataInput &input);
};

#endif