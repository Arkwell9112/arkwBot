#ifndef HAAPIBUFFERLISTREQUESTMESSAGE
#define HAAPIBUFFERLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiBufferListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3387;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiBufferListRequestMessage(ICustomDataInput &input);
};

#endif