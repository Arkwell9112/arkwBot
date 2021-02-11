#ifndef ALLIANCEPARTIALLISTMESSAGE
#define ALLIANCEPARTIALLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AllianceListMessage.h"

class AlliancePartialListMessage : public AllianceListMessage {
public:
    unsigned int protocolId = 4900;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlliancePartialListMessage(ICustomDataInput &input);
};

#endif