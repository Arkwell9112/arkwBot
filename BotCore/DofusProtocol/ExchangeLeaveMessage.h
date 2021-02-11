#ifndef EXCHANGELEAVEMESSAGE
#define EXCHANGELEAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "LeaveDialogMessage.h"

class ExchangeLeaveMessage : public LeaveDialogMessage {
public:
    bool success = false;
    unsigned int protocolId = 5652;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeLeaveMessage(ICustomDataInput &input);

    void _successFunc(ICustomDataInput &input);
};

#endif