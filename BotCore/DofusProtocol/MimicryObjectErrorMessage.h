#ifndef MIMICRYOBJECTERRORMESSAGE
#define MIMICRYOBJECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"

class MimicryObjectErrorMessage : public SymbioticObjectErrorMessage {
public:
    bool preview = false;
    unsigned int protocolId = 3449;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MimicryObjectErrorMessage(ICustomDataInput &input);

    void _previewFunc(ICustomDataInput &input);
};

#endif