#ifndef GUIDEDMODEQUITREQUESTMESSAGE
#define GUIDEDMODEQUITREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuidedModeQuitRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3190;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuidedModeQuitRequestMessage(ICustomDataInput &input);
};

#endif