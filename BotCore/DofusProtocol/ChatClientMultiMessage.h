#ifndef CHATCLIENTMULTIMESSAGE
#define CHATCLIENTMULTIMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ChatAbstractClientMessage.h"

class ChatClientMultiMessage : public ChatAbstractClientMessage {
public:
    unsigned int channel = 0;
    unsigned int protocolId = 4566;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatClientMultiMessage(ICustomDataInput &input);

    void _channelFunc(ICustomDataInput &input);
};

#endif