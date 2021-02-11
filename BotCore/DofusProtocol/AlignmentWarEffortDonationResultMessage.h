#ifndef ALIGNMENTWAREFFORTDONATIONRESULTMESSAGE
#define ALIGNMENTWAREFFORTDONATIONRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentWarEffortDonationResultMessage : public NetworkInterface {
public:
    int result = 4;
    unsigned int protocolId = 8543;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortDonationResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif