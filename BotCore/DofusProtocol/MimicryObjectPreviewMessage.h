#ifndef MIMICRYOBJECTPREVIEWMESSAGE
#define MIMICRYOBJECTPREVIEWMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItem.h"
#include "Item.h"

class MimicryObjectPreviewMessage : public NetworkInterface {
public:
    ObjectItem result;
    unsigned int protocolId = 4707;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MimicryObjectPreviewMessage(ICustomDataInput &input);
};

#endif