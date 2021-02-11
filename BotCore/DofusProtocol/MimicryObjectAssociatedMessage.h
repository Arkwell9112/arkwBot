#ifndef MIMICRYOBJECTASSOCIATEDMESSAGE
#define MIMICRYOBJECTASSOCIATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SymbioticObjectAssociatedMessage.h"

class MimicryObjectAssociatedMessage : public SymbioticObjectAssociatedMessage {
public:
    unsigned int protocolId = 1838;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MimicryObjectAssociatedMessage(ICustomDataInput &input);
};

#endif