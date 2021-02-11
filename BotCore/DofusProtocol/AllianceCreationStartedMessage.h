#ifndef ALLIANCECREATIONSTARTEDMESSAGE
#define ALLIANCECREATIONSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceCreationStartedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 245;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceCreationStartedMessage(ICustomDataInput &input);
};

#endif