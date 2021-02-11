#ifndef OBJECTGROUNDLISTADDEDMESSAGE
#define OBJECTGROUNDLISTADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ObjectGroundListAddedMessage : public NetworkInterface {
public:
    std::vector<unsigned int> cells;
    std::vector<unsigned int> referenceIds;
    unsigned int protocolId = 3154;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectGroundListAddedMessage(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);

    void _referenceIdsFunc(ICustomDataInput &input);
};

#endif