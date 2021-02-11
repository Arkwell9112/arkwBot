#ifndef ALLIANCECREATIONVALIDMESSAGE
#define ALLIANCECREATIONVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildEmblem.h"

class AllianceCreationValidMessage : public NetworkInterface {
public:
    std::string allianceName;
    std::string allianceTag;
    GuildEmblem allianceEmblem;
    unsigned int protocolId = 5933;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceCreationValidMessage(ICustomDataInput &input);

    void _allianceNameFunc(ICustomDataInput &input);

    void _allianceTagFunc(ICustomDataInput &input);
};

#endif