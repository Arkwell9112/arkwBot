#ifndef CHARACTERALIGNMENTWAREFFORTPROGRESSIONMESSAGE
#define CHARACTERALIGNMENTWAREFFORTPROGRESSIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AlignmentWarEffortProgressionMessage.h"

class CharacterAlignmentWarEffortProgressionMessage : public NetworkInterface {
public:
    double alignmentWarEffortDailyLimit = 0;
    double alignmentWarEffortDailyDonation = 0;
    double alignmentWarEffortPersonalDonation = 0;
    unsigned int protocolId = 1671;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterAlignmentWarEffortProgressionMessage(ICustomDataInput &input);

    void _alignmentWarEffortDailyLimitFunc(ICustomDataInput &input);

    void _alignmentWarEffortDailyDonationFunc(ICustomDataInput &input);

    void _alignmentWarEffortPersonalDonationFunc(ICustomDataInput &input);
};

#endif