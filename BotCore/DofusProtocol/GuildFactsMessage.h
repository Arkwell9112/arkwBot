#ifndef GUILDFACTSMESSAGE
#define GUILDFACTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildFactSheetInformations.h"
#include "CharacterMinimalGuildPublicInformations.h"

class GuildFactsMessage : public NetworkInterface {
public:
    GuildFactSheetInformations infos;
    unsigned int creationDate = 0;
    unsigned int nbTaxCollectors = 0;
    std::vector<CharacterMinimalGuildPublicInformations> members;
    unsigned int protocolId = 2990;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFactsMessage(ICustomDataInput &input);

    void _creationDateFunc(ICustomDataInput &input);

    void _nbTaxCollectorsFunc(ICustomDataInput &input);

    void _membersFunc(ICustomDataInput &input);
};

#endif