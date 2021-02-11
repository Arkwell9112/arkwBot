#ifndef ALLIANCEFACTSREQUESTMESSAGE
#define ALLIANCEFACTSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceFactsRequestMessage : public NetworkInterface {
public:
    unsigned int allianceId = 0;
    unsigned int protocolId = 6213;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceFactsRequestMessage(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);
};

#endif