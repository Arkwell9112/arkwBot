#ifndef GUILDHOUSEUPDATEINFORMATIONMESSAGE
#define GUILDHOUSEUPDATEINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "HouseInformationsForGuild.h"
#include "HouseInformations.h"

class GuildHouseUpdateInformationMessage : public NetworkInterface {
public:
    HouseInformationsForGuild housesInformations;
    unsigned int protocolId = 8230;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildHouseUpdateInformationMessage(ICustomDataInput &input);
};

#endif