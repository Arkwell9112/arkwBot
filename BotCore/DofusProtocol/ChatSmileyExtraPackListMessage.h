#ifndef CHATSMILEYEXTRAPACKLISTMESSAGE
#define CHATSMILEYEXTRAPACKLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ChatSmileyExtraPackListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> packIds;
    unsigned int protocolId = 6355;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatSmileyExtraPackListMessage(ICustomDataInput &input);

    void _packIdsFunc(ICustomDataInput &input);
};

#endif