#ifndef ITEM
#define ITEM

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class Item : public NetworkInterface {
public:
    unsigned int protocolId = 2786;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Item(ICustomDataInput &input);
};

#endif