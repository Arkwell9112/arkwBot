#ifndef OBJECTGROUNDREMOVEDMULTIPLEMESSAGE
#define OBJECTGROUNDREMOVEDMULTIPLEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ObjectGroundRemovedMultipleMessage : public NetworkInterface {
public:
    std::vector<unsigned int> cells;
    unsigned int protocolId = 7122;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectGroundRemovedMultipleMessage(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);
};

#endif