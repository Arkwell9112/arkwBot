#ifndef ALLIANCECREATIONRESULTMESSAGE
#define ALLIANCECREATIONRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceCreationResultMessage : public NetworkInterface {
public:
    unsigned int result = 0;
    unsigned int protocolId = 1359;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceCreationResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif