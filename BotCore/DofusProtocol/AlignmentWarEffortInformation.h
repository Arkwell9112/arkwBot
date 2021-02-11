#ifndef ALIGNMENTWAREFFORTINFORMATION
#define ALIGNMENTWAREFFORTINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentWarEffortInformation : public NetworkInterface {
public:
    int alignmentSide = 0;
    double alignmentWarEffort = 0;
    unsigned int protocolId = 9147;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortInformation(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _alignmentWarEffortFunc(ICustomDataInput &input);
};

#endif