#ifndef PADDOCKREMOVEITEMREQUESTMESSAGE
#define PADDOCKREMOVEITEMREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class PaddockRemoveItemRequestMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 1977;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockRemoveItemRequestMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif