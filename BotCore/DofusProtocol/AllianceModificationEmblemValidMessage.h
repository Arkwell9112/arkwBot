#ifndef ALLIANCEMODIFICATIONEMBLEMVALIDMESSAGE
#define ALLIANCEMODIFICATIONEMBLEMVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildEmblem.h"

class AllianceModificationEmblemValidMessage : public NetworkInterface {
public:
    GuildEmblem Alliancemblem;
    unsigned int protocolId = 4828;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceModificationEmblemValidMessage(ICustomDataInput &input);
};

#endif