#ifndef GUILDSPELLUPGRADEREQUESTMESSAGE
#define GUILDSPELLUPGRADEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildSpellUpgradeRequestMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    unsigned int protocolId = 8242;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildSpellUpgradeRequestMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif