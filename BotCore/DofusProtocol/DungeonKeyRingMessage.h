#ifndef DUNGEONKEYRINGMESSAGE
#define DUNGEONKEYRINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DungeonKeyRingMessage : public NetworkInterface {
public:
    std::vector<unsigned int> availables;
    std::vector<unsigned int> unavailables;
    unsigned int protocolId = 5267;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonKeyRingMessage(ICustomDataInput &input);

    void _availablesFunc(ICustomDataInput &input);

    void _unavailablesFunc(ICustomDataInput &input);
};

#endif