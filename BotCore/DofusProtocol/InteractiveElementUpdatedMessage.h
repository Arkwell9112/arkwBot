#ifndef INTERACTIVEELEMENTUPDATEDMESSAGE
#define INTERACTIVEELEMENTUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "InteractiveElement.h"

class InteractiveElementUpdatedMessage : public NetworkInterface {
public:
    InteractiveElement interactiveElement;
    unsigned int protocolId = 2485;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveElementUpdatedMessage(ICustomDataInput &input);
};

#endif