#ifndef PADDOCKPROPERTIESMESSAGE
#define PADDOCKPROPERTIESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PaddockInstancesInformations.h"

class PaddockPropertiesMessage : public NetworkInterface {
public:
    PaddockInstancesInformations properties;
    unsigned int protocolId = 3136;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockPropertiesMessage(ICustomDataInput &input);
};

#endif