#ifndef OBJECTSDELETEDMESSAGE
#define OBJECTSDELETEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ObjectsDeletedMessage : public NetworkInterface {
public:
    std::vector<unsigned int> objectUID;
    unsigned int protocolId = 7112;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectsDeletedMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif