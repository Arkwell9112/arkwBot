#ifndef EXCHANGEOBJECTREMOVEDMESSAGE
#define EXCHANGEOBJECTREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMessage.h"

class ExchangeObjectRemovedMessage : public ExchangeObjectMessage {
public:
    unsigned int objectUID = 0;
    unsigned int protocolId = 4558;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectRemovedMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif