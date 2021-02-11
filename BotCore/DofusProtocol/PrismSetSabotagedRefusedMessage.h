#ifndef PRISMSETSABOTAGEDREFUSEDMESSAGE
#define PRISMSETSABOTAGEDREFUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismSetSabotagedRefusedMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    int reason = 0;
    unsigned int protocolId = 9171;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismSetSabotagedRefusedMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif