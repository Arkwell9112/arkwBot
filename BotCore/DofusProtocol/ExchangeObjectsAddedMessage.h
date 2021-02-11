#ifndef EXCHANGEOBJECTSADDEDMESSAGE
#define EXCHANGEOBJECTSADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ObjectsAddedMessage.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectsAddedMessage : public ExchangeObjectMessage {
public:
    std::vector<ObjectItem> object;
    unsigned int protocolId = 6047;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectsAddedMessage(ICustomDataInput &input);

    void _objectFunc(ICustomDataInput &input);
};

#endif