#ifndef STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE
#define STOPTOLISTENRUNNINGFIGHTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StopToListenRunningFightRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7587;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StopToListenRunningFightRequestMessage(ICustomDataInput &input);
};

#endif