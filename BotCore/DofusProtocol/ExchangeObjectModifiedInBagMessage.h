#ifndef EXCHANGEOBJECTMODIFIEDINBAGMESSAGE
#define EXCHANGEOBJECTMODIFIEDINBAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectModifiedInBagMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;
    unsigned int protocolId = 1523;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectModifiedInBagMessage(ICustomDataInput &input);
};

#endif