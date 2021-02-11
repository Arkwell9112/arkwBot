#ifndef EXCHANGEOBJECTREMOVEDFROMBAGMESSAGE
#define EXCHANGEOBJECTREMOVEDFROMBAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectRemovedFromBagMessage : public ExchangeObjectMessage {
public:
    unsigned int objectUID = 0;
    unsigned int protocolId = 2138;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectRemovedFromBagMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif