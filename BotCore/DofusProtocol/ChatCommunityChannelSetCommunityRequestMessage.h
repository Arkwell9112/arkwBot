#ifndef CHATCOMMUNITYCHANNELSETCOMMUNITYREQUESTMESSAGE
#define CHATCOMMUNITYCHANNELSETCOMMUNITYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChatCommunityChannelSetCommunityRequestMessage : public NetworkInterface {
public:
    int communityId = 0;
    unsigned int protocolId = 7192;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatCommunityChannelSetCommunityRequestMessage(ICustomDataInput &input);

    void _communityIdFunc(ICustomDataInput &input);
};

#endif