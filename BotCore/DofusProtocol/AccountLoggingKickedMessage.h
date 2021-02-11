#ifndef ACCOUNTLOGGINGKICKEDMESSAGE
#define ACCOUNTLOGGINGKICKEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AccountLoggingKickedMessage : public NetworkInterface {
public:
    unsigned int days = 0;
    unsigned int hours = 0;
    unsigned int minutes = 0;
    unsigned int protocolId = 3558;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountLoggingKickedMessage(ICustomDataInput &input);

    void _daysFunc(ICustomDataInput &input);

    void _hoursFunc(ICustomDataInput &input);

    void _minutesFunc(ICustomDataInput &input);
};

#endif