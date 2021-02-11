#ifndef GOLDITEM
#define GOLDITEM

#include "../IO/ICustomDataInput.h"
#include "Item.h"

class GoldItem : public Item {
public:
    double sum = 0;
    unsigned int protocolId = 39;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GoldItem(ICustomDataInput &input);

    void _sumFunc(ICustomDataInput &input);
};

#endif