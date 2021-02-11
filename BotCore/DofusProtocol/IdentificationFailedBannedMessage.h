#ifndef IDENTIFICATIONFAILEDBANNEDMESSAGE
#define IDENTIFICATIONFAILEDBANNEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "IdentificationFailedMessage.h"

class IdentificationFailedBannedMessage : public IdentificationFailedMessage {
public:
    double banEndDate = 0;
    unsigned int protocolId = 5973;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationFailedBannedMessage(ICustomDataInput &input);

    void _banEndDateFunc(ICustomDataInput &input);
};

#endif