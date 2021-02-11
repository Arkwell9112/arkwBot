#ifndef EXCHANGEOBJECTSMODIFIEDMESSAGE
#define EXCHANGEOBJECTSMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectsModifiedMessage : public ExchangeObjectMessage {
public:
    std::vector<ObjectItem> object;
    unsigned int protocolId = 9331;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectsModifiedMessage(ICustomDataInput &input);

    void _objectFunc(ICustomDataInput &input);
};

#endif