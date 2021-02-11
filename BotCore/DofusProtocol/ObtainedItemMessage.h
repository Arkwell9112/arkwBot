#ifndef OBTAINEDITEMMESSAGE
#define OBTAINEDITEMMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ObtainedItemMessage : public NetworkInterface {
public:
    unsigned int genericId = 0;
    unsigned int baseQuantity = 0;
    unsigned int protocolId = 993;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObtainedItemMessage(ICustomDataInput &input);

    void _genericIdFunc(ICustomDataInput &input);

    void _baseQuantityFunc(ICustomDataInput &input);
};

#endif