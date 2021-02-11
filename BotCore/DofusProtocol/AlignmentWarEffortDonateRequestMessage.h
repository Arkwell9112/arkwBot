#ifndef ALIGNMENTWAREFFORTDONATEREQUESTMESSAGE
#define ALIGNMENTWAREFFORTDONATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentWarEffortDonateRequestMessage : public NetworkInterface {
public:
    double donation = 0;
    unsigned int protocolId = 522;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortDonateRequestMessage(ICustomDataInput &input);

    void _donationFunc(ICustomDataInput &input);
};

#endif