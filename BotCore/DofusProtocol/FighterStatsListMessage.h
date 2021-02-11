#ifndef FIGHTERSTATSLISTMESSAGE
#define FIGHTERSTATSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterCharacteristicsInformations.h"

class FighterStatsListMessage : public NetworkInterface {
public:
    CharacterCharacteristicsInformations stats;
    unsigned int protocolId = 6598;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FighterStatsListMessage(ICustomDataInput &input);
};

#endif