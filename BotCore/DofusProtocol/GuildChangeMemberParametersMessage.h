#ifndef GUILDCHANGEMEMBERPARAMETERSMESSAGE
#define GUILDCHANGEMEMBERPARAMETERSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildChangeMemberParametersMessage : public NetworkInterface {
public:
    double memberId = 0;
    unsigned int rank = 0;
    unsigned int experienceGivenPercent = 0;
    unsigned int rights = 0;
    unsigned int protocolId = 2996;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildChangeMemberParametersMessage(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);

    void _experienceGivenPercentFunc(ICustomDataInput &input);

    void _rightsFunc(ICustomDataInput &input);
};

#endif