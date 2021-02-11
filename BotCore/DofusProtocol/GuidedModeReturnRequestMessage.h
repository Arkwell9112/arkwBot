#ifndef GUIDEDMODERETURNREQUESTMESSAGE
#define GUIDEDMODERETURNREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuidedModeReturnRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2556;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuidedModeReturnRequestMessage(ICustomDataInput &input);
};

#endif