#ifndef RECYCLEDITEM
#define RECYCLEDITEM

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class RecycledItem : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int qty = 0;
    unsigned int protocolId = 8468;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_RecycledItem(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _qtyFunc(ICustomDataInput &input);
};

#endif