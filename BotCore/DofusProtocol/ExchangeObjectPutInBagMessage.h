#ifndef EXCHANGEOBJECTPUTINBAGMESSAGE
#define EXCHANGEOBJECTPUTINBAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectPutInBagMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;
    unsigned int protocolId = 976;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectPutInBagMessage(ICustomDataInput &input);
};

#endif