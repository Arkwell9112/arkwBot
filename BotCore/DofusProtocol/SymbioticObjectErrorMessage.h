#ifndef SYMBIOTICOBJECTERRORMESSAGE
#define SYMBIOTICOBJECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectErrorMessage.h"

class SymbioticObjectErrorMessage : public ObjectErrorMessage {
public:
    int errorCode = 0;
    unsigned int protocolId = 7946;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SymbioticObjectErrorMessage(ICustomDataInput &input);

    void _errorCodeFunc(ICustomDataInput &input);
};

#endif