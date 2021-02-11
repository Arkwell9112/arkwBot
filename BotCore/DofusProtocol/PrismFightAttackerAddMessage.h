#ifndef PRISMFIGHTATTACKERADDMESSAGE
#define PRISMFIGHTATTACKERADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalPlusLookInformations.h"

class PrismFightAttackerAddMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    CharacterMinimalPlusLookInformations attacker;
    unsigned int protocolId = 9750;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightAttackerAddMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif