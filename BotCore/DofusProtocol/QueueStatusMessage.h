#ifndef QUEUESTATUSMESSAGE
#define QUEUESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QueueStatusMessage : public NetworkInterface {
public:
    unsigned int position = 0;
    unsigned int total = 0;
    unsigned int protocolId = 817;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QueueStatusMessage(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _totalFunc(ICustomDataInput &input);
};

#endif