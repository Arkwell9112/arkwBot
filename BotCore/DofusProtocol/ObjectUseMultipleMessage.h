#ifndef OBJECTUSEMULTIPLEMESSAGE
#define OBJECTUSEMULTIPLEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectUseMessage.h"

class ObjectUseMultipleMessage : public ObjectUseMessage {
public:
    unsigned int quantity = 0;
    unsigned int protocolId = 4836;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectUseMultipleMessage(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif