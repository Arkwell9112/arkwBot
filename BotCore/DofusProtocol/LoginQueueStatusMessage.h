#ifndef LOGINQUEUESTATUSMESSAGE
#define LOGINQUEUESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "QueueStatusMessage.h"

class LoginQueueStatusMessage : public NetworkInterface {
public:
    unsigned int position = 0;
    unsigned int total = 0;
    unsigned int protocolId = 552;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LoginQueueStatusMessage(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _totalFunc(ICustomDataInput &input);
};

#endif