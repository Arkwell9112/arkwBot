#ifndef HAAPICONSUMEBUFFERREQUESTMESSAGE
#define HAAPICONSUMEBUFFERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiConsumeBufferRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6378;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiConsumeBufferRequestMessage(ICustomDataInput &input);
};

#endif