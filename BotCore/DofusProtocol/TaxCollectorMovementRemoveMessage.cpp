#include "TaxCollectorMovementRemoveMessage.h"

void TaxCollectorMovementRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorMovementRemoveMessage(input);
}

void TaxCollectorMovementRemoveMessage::deserializeAs_TaxCollectorMovementRemoveMessage(ICustomDataInput &input) {
    this->_collectorIdFunc(input);
}

void TaxCollectorMovementRemoveMessage::_collectorIdFunc(ICustomDataInput &input) {
    this->collectorId = input.readDouble();

}

