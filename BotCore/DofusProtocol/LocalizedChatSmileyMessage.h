#ifndef LOCALIZEDCHATSMILEYMESSAGE
#define LOCALIZEDCHATSMILEYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ChatSmileyMessage.h"

class LocalizedChatSmileyMessage : public ChatSmileyMessage {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 5488;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LocalizedChatSmileyMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif