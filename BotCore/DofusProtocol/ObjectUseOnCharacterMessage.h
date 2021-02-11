#ifndef OBJECTUSEONCHARACTERMESSAGE
#define OBJECTUSEONCHARACTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectUseMessage.h"

class ObjectUseOnCharacterMessage : public ObjectUseMessage {
public:
    double characterId = 0;
    unsigned int protocolId = 7740;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectUseOnCharacterMessage(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);
};

#endif