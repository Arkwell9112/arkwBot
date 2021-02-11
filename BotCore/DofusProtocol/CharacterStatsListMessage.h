#ifndef CHARACTERSTATSLISTMESSAGE
#define CHARACTERSTATSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterCharacteristicsInformations.h"

class CharacterStatsListMessage : public NetworkInterface {
public:
    CharacterCharacteristicsInformations stats;
    unsigned int protocolId = 2823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterStatsListMessage(ICustomDataInput &input);
};

#endif