#ifndef EXCHANGECRAFTRESULTWITHOBJECTDESCMESSAGE
#define EXCHANGECRAFTRESULTWITHOBJECTDESCMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectItemNotInContainer.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ExchangeCraftResultMessage.h"

class ExchangeCraftResultWithObjectDescMessage : public ExchangeCraftResultMessage {
public:
    ObjectItemNotInContainer objectInfo;
    unsigned int protocolId = 7951;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftResultWithObjectDescMessage(ICustomDataInput &input);
};

#endif