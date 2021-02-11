#ifndef ALIGNMENTWAREFFORTPROGRESSIONMESSAGE
#define ALIGNMENTWAREFFORTPROGRESSIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AlignmentWarEffortInformation.h"

class AlignmentWarEffortProgressionMessage : public NetworkInterface {
public:
    std::vector<AlignmentWarEffortInformation> effortProgressions;
    unsigned int protocolId = 2099;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortProgressionMessage(ICustomDataInput &input);

    void _effortProgressionsFunc(ICustomDataInput &input);
};

#endif