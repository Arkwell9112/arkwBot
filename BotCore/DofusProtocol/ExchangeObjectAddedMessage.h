#ifndef EXCHANGEOBJECTADDEDMESSAGE
#define EXCHANGEOBJECTADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ObjectAddedMessage.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectAddedMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;
    unsigned int protocolId = 3555;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectAddedMessage(ICustomDataInput &input);
};

#endif