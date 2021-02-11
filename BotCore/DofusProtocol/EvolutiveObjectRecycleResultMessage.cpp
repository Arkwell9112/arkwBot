#include "EvolutiveObjectRecycleResultMessage.h"

void EvolutiveObjectRecycleResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EvolutiveObjectRecycleResultMessage(input);
}

void EvolutiveObjectRecycleResultMessage::deserializeAs_EvolutiveObjectRecycleResultMessage(ICustomDataInput &input) {
    RecycledItem _item1;
    unsigned int _recycledItemsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _recycledItemsLen; _i1++) {
        _item1.deserialize(input);
        this->recycledItems.push_back(_item1);
    }
}

void EvolutiveObjectRecycleResultMessage::_recycledItemsFunc(ICustomDataInput &input) {
    RecycledItem _item;
    _item.deserialize(input);
    this->recycledItems.push_back(_item);
}

