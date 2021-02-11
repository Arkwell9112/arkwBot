#include "TaxCollectorMovementsOfflineMessage.h"

void TaxCollectorMovementsOfflineMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorMovementsOfflineMessage(input);
}

void TaxCollectorMovementsOfflineMessage::deserializeAs_TaxCollectorMovementsOfflineMessage(ICustomDataInput &input) {
    TaxCollectorMovement _item1;
    unsigned int _movementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _movementsLen; _i1++) {
        _item1.deserialize(input);
        this->movements.push_back(_item1);
    }
}

void TaxCollectorMovementsOfflineMessage::_movementsFunc(ICustomDataInput &input) {
    TaxCollectorMovement _item;
    _item.deserialize(input);
    this->movements.push_back(_item);
}

