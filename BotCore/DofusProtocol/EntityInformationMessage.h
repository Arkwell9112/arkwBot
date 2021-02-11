#ifndef ENTITYINFORMATIONMESSAGE
#define ENTITYINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityInformation.h"

class EntityInformationMessage : public NetworkInterface {
public:
    EntityInformation entity;
    unsigned int protocolId = 5299;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityInformationMessage(ICustomDataInput &input);
};

#endif