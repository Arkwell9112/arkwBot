#ifndef SETENABLEPVPREQUESTMESSAGE
#define SETENABLEPVPREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SetEnablePVPRequestMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 6792;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SetEnablePVPRequestMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif