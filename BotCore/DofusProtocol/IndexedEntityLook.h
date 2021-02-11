#ifndef INDEXEDENTITYLOOK
#define INDEXEDENTITYLOOK

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityLook.h"

class IndexedEntityLook : public NetworkInterface {
public:
    EntityLook look;
    unsigned int index = 0;
    unsigned int protocolId = 7882;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IndexedEntityLook(ICustomDataInput &input);

    void _indexFunc(ICustomDataInput &input);
};

#endif