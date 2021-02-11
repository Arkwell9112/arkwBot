#ifndef GOLDADDEDMESSAGE
#define GOLDADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"
#include "GoldItem.h"

class GoldAddedMessage : public NetworkInterface {
public:
    GoldItem gold;
    unsigned int protocolId = 1168;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GoldAddedMessage(ICustomDataInput &input);
};

#endif