#ifndef ALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE
#define ALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentWarEffortProgressionRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6425;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortProgressionRequestMessage(ICustomDataInput &input);
};

#endif