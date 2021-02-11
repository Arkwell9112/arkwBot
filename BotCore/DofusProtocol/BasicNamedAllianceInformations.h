#ifndef BASICNAMEDALLIANCEINFORMATIONS
#define BASICNAMEDALLIANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "BasicAllianceInformations.h"

class BasicNamedAllianceInformations : public BasicAllianceInformations {
public:
    std::string allianceName;
    unsigned int protocolId = 4955;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicNamedAllianceInformations(ICustomDataInput &input);

    void _allianceNameFunc(ICustomDataInput &input);
};

#endif