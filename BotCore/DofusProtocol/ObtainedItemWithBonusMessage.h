#ifndef OBTAINEDITEMWITHBONUSMESSAGE
#define OBTAINEDITEMWITHBONUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "Item.h"
#include "ObtainedItemMessage.h"

class ObtainedItemWithBonusMessage : public ObtainedItemMessage {
public:
    unsigned int bonusQuantity = 0;
    unsigned int protocolId = 2289;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObtainedItemWithBonusMessage(ICustomDataInput &input);

    void _bonusQuantityFunc(ICustomDataInput &input);
};

#endif