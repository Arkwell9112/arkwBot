#ifndef BASICALLIANCEINFORMATIONS
#define BASICALLIANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractSocialGroupInfos.h"

class BasicAllianceInformations : public AbstractSocialGroupInfos {
public:
    unsigned int allianceId = 0;
    std::string allianceTag;
    unsigned int protocolId = 1115;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicAllianceInformations(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);

    void _allianceTagFunc(ICustomDataInput &input);
};

#endif