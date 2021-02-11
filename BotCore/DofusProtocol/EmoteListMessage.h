#ifndef EMOTELISTMESSAGE
#define EMOTELISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class EmoteListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> emoteIds;
    unsigned int protocolId = 4861;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmoteListMessage(ICustomDataInput &input);

    void _emoteIdsFunc(ICustomDataInput &input);
};

#endif