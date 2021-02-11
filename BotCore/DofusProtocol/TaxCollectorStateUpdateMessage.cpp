#include "TaxCollectorStateUpdateMessage.h"

void TaxCollectorStateUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorStateUpdateMessage(input);
}

void TaxCollectorStateUpdateMessage::deserializeAs_TaxCollectorStateUpdateMessage(ICustomDataInput &input) {
    this->_uniqueIdFunc(input);
    this->_stateFunc(input);
}

void TaxCollectorStateUpdateMessage::_uniqueIdFunc(ICustomDataInput &input) {
    this->uniqueId = input.readDouble();

}

void TaxCollectorStateUpdateMessage::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();
}

