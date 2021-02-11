#ifndef EMOTEPLAYMASSIVEMESSAGE
#define EMOTEPLAYMASSIVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "EmotePlayAbstractMessage.h"

class EmotePlayMassiveMessage : public EmotePlayAbstractMessage {
public:
    std::vector<double> actorIds;
    unsigned int protocolId = 2261;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EmotePlayMassiveMessage(ICustomDataInput &input);

    void _actorIdsFunc(ICustomDataInput &input);
};

#endif