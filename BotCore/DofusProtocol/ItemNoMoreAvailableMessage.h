#ifndef ITEMNOMOREAVAILABLEMESSAGE
#define ITEMNOMOREAVAILABLEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ItemNoMoreAvailableMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5657;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ItemNoMoreAvailableMessage(ICustomDataInput &input);
};

#endif