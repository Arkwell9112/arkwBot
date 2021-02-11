#ifndef PRISMFIGHTDEFENDERADDMESSAGE
#define PRISMFIGHTDEFENDERADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalPlusLookInformations.h"

class PrismFightDefenderAddMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    CharacterMinimalPlusLookInformations defender;
    unsigned int protocolId = 1541;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightDefenderAddMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif