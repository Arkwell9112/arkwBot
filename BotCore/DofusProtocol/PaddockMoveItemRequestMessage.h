#ifndef PADDOCKMOVEITEMREQUESTMESSAGE
#define PADDOCKMOVEITEMREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class PaddockMoveItemRequestMessage : public NetworkInterface {
public:
    unsigned int oldCellId = 0;
    unsigned int newCellId = 0;
    unsigned int protocolId = 4689;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockMoveItemRequestMessage(ICustomDataInput &input);

    void _oldCellIdFunc(ICustomDataInput &input);

    void _newCellIdFunc(ICustomDataInput &input);
};

#endif