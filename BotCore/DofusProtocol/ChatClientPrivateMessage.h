#ifndef CHATCLIENTPRIVATEMESSAGE
#define CHATCLIENTPRIVATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ChatAbstractClientMessage.h"

class ChatClientPrivateMessage : public ChatAbstractClientMessage {
public:
    std::string receiver;
    unsigned int protocolId = 7158;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatClientPrivateMessage(ICustomDataInput &input);

    void _receiverFunc(ICustomDataInput &input);
};

#endif