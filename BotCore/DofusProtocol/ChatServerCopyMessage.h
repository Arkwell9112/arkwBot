#ifndef CHATSERVERCOPYMESSAGE
#define CHATSERVERCOPYMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ChatAbstractServerMessage.h"

class ChatServerCopyMessage : public ChatAbstractServerMessage {
public:
    double receiverId = 0;
    std::string receiverName;
    unsigned int protocolId = 1783;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatServerCopyMessage(ICustomDataInput &input);

    void _receiverIdFunc(ICustomDataInput &input);

    void _receiverNameFunc(ICustomDataInput &input);
};

#endif