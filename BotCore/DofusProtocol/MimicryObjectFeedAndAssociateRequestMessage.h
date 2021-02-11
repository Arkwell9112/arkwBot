#ifndef MIMICRYOBJECTFEEDANDASSOCIATEREQUESTMESSAGE
#define MIMICRYOBJECTFEEDANDASSOCIATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SymbioticObjectAssociateRequestMessage.h"

class MimicryObjectFeedAndAssociateRequestMessage : public SymbioticObjectAssociateRequestMessage {
public:
    unsigned int foodUID = 0;
    unsigned int foodPos = 0;
    bool preview = false;
    unsigned int protocolId = 3975;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MimicryObjectFeedAndAssociateRequestMessage(ICustomDataInput &input);

    void _foodUIDFunc(ICustomDataInput &input);

    void _foodPosFunc(ICustomDataInput &input);

    void _previewFunc(ICustomDataInput &input);
};

#endif