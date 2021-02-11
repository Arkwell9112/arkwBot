#ifndef ONCONNECTIONEVENTMESSAGE
#define ONCONNECTIONEVENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OnConnectionEventMessage : public NetworkInterface {
public:
    unsigned int eventType = 0;
    unsigned int protocolId = 5230;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OnConnectionEventMessage(ICustomDataInput &input);

    void _eventTypeFunc(ICustomDataInput &input);
};

#endif