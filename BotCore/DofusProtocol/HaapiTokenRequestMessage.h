#ifndef HAAPITOKENREQUESTMESSAGE
#define HAAPITOKENREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiTokenRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2216;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiTokenRequestMessage(ICustomDataInput &input);
};

#endif