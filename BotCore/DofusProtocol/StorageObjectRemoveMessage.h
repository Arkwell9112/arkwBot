#ifndef STORAGEOBJECTREMOVEMESSAGE
#define STORAGEOBJECTREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StorageObjectRemoveMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int protocolId = 3682;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageObjectRemoveMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif