#ifndef STORAGEOBJECTSREMOVEMESSAGE
#define STORAGEOBJECTSREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class StorageObjectsRemoveMessage : public NetworkInterface {
public:
    std::vector<unsigned int> objectUIDList;
    unsigned int protocolId = 3930;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageObjectsRemoveMessage(ICustomDataInput &input);

    void _objectUIDListFunc(ICustomDataInput &input);
};

#endif