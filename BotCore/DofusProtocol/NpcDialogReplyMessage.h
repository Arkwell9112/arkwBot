#ifndef NPCDIALOGREPLYMESSAGE
#define NPCDIALOGREPLYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NpcDialogReplyMessage : public NetworkInterface {
public:
    unsigned int replyId = 0;
    unsigned int protocolId = 4487;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NpcDialogReplyMessage(ICustomDataInput &input);

    void _replyIdFunc(ICustomDataInput &input);
};

#endif