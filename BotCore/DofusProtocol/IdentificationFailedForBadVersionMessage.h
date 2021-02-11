#ifndef IDENTIFICATIONFAILEDFORBADVERSIONMESSAGE
#define IDENTIFICATIONFAILEDFORBADVERSIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "Version.h"
#include "IdentificationFailedMessage.h"

class IdentificationFailedForBadVersionMessage : public IdentificationFailedMessage {
public:
    Version requiredVersion;
    unsigned int protocolId = 550;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationFailedForBadVersionMessage(ICustomDataInput &input);
};

#endif