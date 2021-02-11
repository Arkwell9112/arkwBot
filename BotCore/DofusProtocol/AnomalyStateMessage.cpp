#include "AnomalyStateMessage.h"

void AnomalyStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AnomalyStateMessage(input);
}

void AnomalyStateMessage::deserializeAs_AnomalyStateMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_openFunc(input);
    this->_closingTimeFunc(input);
}

void AnomalyStateMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void AnomalyStateMessage::_openFunc(ICustomDataInput &input) {
    this->open = input.readBoolean();
}

void AnomalyStateMessage::_closingTimeFunc(ICustomDataInput &input) {
    this->closingTime = input.readVarUhLong();

}

