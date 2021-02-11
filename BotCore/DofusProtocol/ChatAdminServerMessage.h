#ifndef CHATADMINSERVERMESSAGE
#define CHATADMINSERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ChatServerMessage.h"

class ChatAdminServerMessage : public ChatServerMessage {
public:
    unsigned int protocolId = 8686;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatAdminServerMessage(ICustomDataInput &input);
};

#endif