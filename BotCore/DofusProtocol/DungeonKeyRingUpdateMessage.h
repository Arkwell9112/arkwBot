#ifndef DUNGEONKEYRINGUPDATEMESSAGE
#define DUNGEONKEYRINGUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DungeonKeyRingUpdateMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    bool available = false;
    unsigned int protocolId = 2543;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonKeyRingUpdateMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _availableFunc(ICustomDataInput &input);
};

#endif