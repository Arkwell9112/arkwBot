#ifndef WRAPPEROBJECTERRORMESSAGE
#define WRAPPEROBJECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"

class WrapperObjectErrorMessage : public SymbioticObjectErrorMessage {
public:
    unsigned int protocolId = 9761;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WrapperObjectErrorMessage(ICustomDataInput &input);
};

#endif