#ifndef ALLIANCEFACTSERRORMESSAGE
#define ALLIANCEFACTSERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceFactsErrorMessage : public NetworkInterface {
public:
    unsigned int allianceId = 0;
    unsigned int protocolId = 5450;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceFactsErrorMessage(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);
};

#endif