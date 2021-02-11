#ifndef CHATSMILEYREQUESTMESSAGE
#define CHATSMILEYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChatSmileyRequestMessage : public NetworkInterface {
public:
    unsigned int smileyId = 0;
    unsigned int protocolId = 460;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatSmileyRequestMessage(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);
};

#endif