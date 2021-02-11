#ifndef PRISMSETSABOTAGEDREQUESTMESSAGE
#define PRISMSETSABOTAGEDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismSetSabotagedRequestMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int protocolId = 8692;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismSetSabotagedRequestMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif