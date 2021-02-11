#ifndef ALLIANCEMODIFICATIONVALIDMESSAGE
#define ALLIANCEMODIFICATIONVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildEmblem.h"

class AllianceModificationValidMessage : public NetworkInterface {
public:
    std::string allianceName;
    std::string allianceTag;
    GuildEmblem Alliancemblem;
    unsigned int protocolId = 6134;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceModificationValidMessage(ICustomDataInput &input);

    void _allianceNameFunc(ICustomDataInput &input);

    void _allianceTagFunc(ICustomDataInput &input);
};

#endif