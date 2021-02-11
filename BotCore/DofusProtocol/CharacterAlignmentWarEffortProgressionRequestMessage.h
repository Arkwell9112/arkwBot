#ifndef CHARACTERALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE
#define CHARACTERALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AlignmentWarEffortProgressionRequestMessage.h"

class CharacterAlignmentWarEffortProgressionRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1077;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterAlignmentWarEffortProgressionRequestMessage(ICustomDataInput &input);
};

#endif