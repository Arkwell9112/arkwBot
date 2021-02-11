#ifndef CHATCOMMUNITYCHANNELCOMMUNITYMESSAGE
#define CHATCOMMUNITYCHANNELCOMMUNITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChatCommunityChannelCommunityMessage : public NetworkInterface {
public:
    int communityId = 0;
    unsigned int protocolId = 37;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatCommunityChannelCommunityMessage(ICustomDataInput &input);

    void _communityIdFunc(ICustomDataInput &input);
};

#endif