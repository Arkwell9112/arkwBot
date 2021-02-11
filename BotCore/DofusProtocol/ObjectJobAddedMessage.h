#ifndef OBJECTJOBADDEDMESSAGE
#define OBJECTJOBADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectJobAddedMessage : public NetworkInterface {
public:
    unsigned int jobId = 0;
    unsigned int protocolId = 9627;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectJobAddedMessage(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);
};

#endif