#ifndef ALLIANCEMODIFICATIONNAMEANDTAGVALIDMESSAGE
#define ALLIANCEMODIFICATIONNAMEANDTAGVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AllianceModificationNameAndTagValidMessage : public NetworkInterface {
public:
    std::string allianceName;
    std::string allianceTag;
    unsigned int protocolId = 812;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceModificationNameAndTagValidMessage(ICustomDataInput &input);

    void _allianceNameFunc(ICustomDataInput &input);

    void _allianceTagFunc(ICustomDataInput &input);
};

#endif