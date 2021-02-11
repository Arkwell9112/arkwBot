#ifndef GUILDHOUSESINFORMATIONMESSAGE
#define GUILDHOUSESINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HouseInformationsForGuild.h"
#include "HouseInformations.h"

class GuildHousesInformationMessage : public NetworkInterface {
public:
    std::vector<HouseInformationsForGuild> housesInformations;
    unsigned int protocolId = 5781;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildHousesInformationMessage(ICustomDataInput &input);

    void _housesInformationsFunc(ICustomDataInput &input);
};

#endif