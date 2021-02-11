#ifndef INTERACTIVEMAPUPDATEMESSAGE
#define INTERACTIVEMAPUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "InteractiveElement.h"

class InteractiveMapUpdateMessage : public NetworkInterface {
public:
    std::vector<InteractiveElement> interactiveElements;
    unsigned int protocolId = 1244;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveMapUpdateMessage(ICustomDataInput &input);

    void _interactiveElementsFunc(ICustomDataInput &input);
};

#endif