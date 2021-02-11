#ifndef EXCHANGEOBJECTMODIFIEDMESSAGE
#define EXCHANGEOBJECTMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ObjectModifiedMessage.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectModifiedMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;
    unsigned int protocolId = 2283;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectModifiedMessage(ICustomDataInput &input);
};

#endif