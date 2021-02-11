#ifndef ENTITIESINFORMATIONMESSAGE
#define ENTITIESINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "EntityInformation.h"

class EntitiesInformationMessage : public NetworkInterface {
public:
    std::vector<EntityInformation> entities;
    unsigned int protocolId = 7903;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntitiesInformationMessage(ICustomDataInput &input);

    void _entitiesFunc(ICustomDataInput &input);
};

#endif