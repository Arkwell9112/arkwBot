#ifndef GUILDINFORMATIONSGENERALMESSAGE
#define GUILDINFORMATIONSGENERALMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"

class GuildInformationsGeneralMessage : public NetworkInterface {
public:
    bool abandonnedPaddock = false;
    unsigned int level = 0;
    double expLevelFloor = 0;
    double experience = 0;
    double expNextLevelFloor = 0;
    unsigned int creationDate = 0;
    unsigned int nbTotalMembers = 0;
    unsigned int nbConnectedMembers = 0;
    unsigned int protocolId = 5262;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInformationsGeneralMessage(ICustomDataInput &input);

    void _abandonnedPaddockFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _expLevelFloorFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _expNextLevelFloorFunc(ICustomDataInput &input);

    void _creationDateFunc(ICustomDataInput &input);

    void _nbTotalMembersFunc(ICustomDataInput &input);

    void _nbConnectedMembersFunc(ICustomDataInput &input);
};

#endif