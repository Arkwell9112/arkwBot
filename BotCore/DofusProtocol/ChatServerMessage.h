#ifndef CHATSERVERMESSAGE
#define CHATSERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ChatAbstractServerMessage.h"

class ChatServerMessage : public ChatAbstractServerMessage {
public:
    double senderId = 0;
    std::string senderName;
    std::string prefix;
    unsigned int senderAccountId = 0;
    unsigned int protocolId = 7831;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatServerMessage(ICustomDataInput &input);

    void _senderIdFunc(ICustomDataInput &input);

    void _senderNameFunc(ICustomDataInput &input);

    void _prefixFunc(ICustomDataInput &input);

    void _senderAccountIdFunc(ICustomDataInput &input);
};

#endif