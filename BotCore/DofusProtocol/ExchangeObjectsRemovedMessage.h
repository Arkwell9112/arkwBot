#ifndef EXCHANGEOBJECTSREMOVEDMESSAGE
#define EXCHANGEOBJECTSREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ExchangeObjectMessage.h"

class ExchangeObjectsRemovedMessage : public ExchangeObjectMessage {
public:
    std::vector<unsigned int> objectUID;
    unsigned int protocolId = 792;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectsRemovedMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif