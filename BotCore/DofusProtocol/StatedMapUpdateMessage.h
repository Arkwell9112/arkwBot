#ifndef STATEDMAPUPDATEMESSAGE
#define STATEDMAPUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "StatedElement.h"

class StatedMapUpdateMessage : public NetworkInterface {
public:
    std::vector<StatedElement> statedElements;
    unsigned int protocolId = 13;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatedMapUpdateMessage(ICustomDataInput &input);

    void _statedElementsFunc(ICustomDataInput &input);
};

#endif