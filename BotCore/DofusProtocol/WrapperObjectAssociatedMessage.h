#ifndef WRAPPEROBJECTASSOCIATEDMESSAGE
#define WRAPPEROBJECTASSOCIATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SymbioticObjectAssociatedMessage.h"

class WrapperObjectAssociatedMessage : public SymbioticObjectAssociatedMessage {
public:
    unsigned int protocolId = 7548;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WrapperObjectAssociatedMessage(ICustomDataInput &input);
};

#endif