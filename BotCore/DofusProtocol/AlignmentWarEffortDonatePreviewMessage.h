#ifndef ALIGNMENTWAREFFORTDONATEPREVIEWMESSAGE
#define ALIGNMENTWAREFFORTDONATEPREVIEWMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlignmentWarEffortDonatePreviewMessage : public NetworkInterface {
public:
    double xp = 0;
    unsigned int protocolId = 6418;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlignmentWarEffortDonatePreviewMessage(ICustomDataInput &input);

    void _xpFunc(ICustomDataInput &input);
};

#endif