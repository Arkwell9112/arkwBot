#ifndef CURRENTMAPINSTANCEMESSAGE
#define CURRENTMAPINSTANCEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "CurrentMapMessage.h"

class CurrentMapInstanceMessage : public CurrentMapMessage {
public:
    double instantiatedMapId = 0;
    unsigned int protocolId = 4541;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CurrentMapInstanceMessage(ICustomDataInput &input);

    void _instantiatedMapIdFunc(ICustomDataInput &input);
};

#endif