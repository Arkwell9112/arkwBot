#ifndef PRISMUSEREQUESTMESSAGE
#define PRISMUSEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismUseRequestMessage : public NetworkInterface {
public:
    unsigned int moduleToUse = 0;
    unsigned int protocolId = 5263;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismUseRequestMessage(ICustomDataInput &input);

    void _moduleToUseFunc(ICustomDataInput &input);
};

#endif