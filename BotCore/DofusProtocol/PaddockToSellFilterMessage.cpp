#include "PaddockToSellFilterMessage.h"

void PaddockToSellFilterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockToSellFilterMessage(input);
}

void PaddockToSellFilterMessage::deserializeAs_PaddockToSellFilterMessage(ICustomDataInput &input) {
    this->_areaIdFunc(input);
    this->_atLeastNbMountFunc(input);
    this->_atLeastNbMachineFunc(input);
    this->_maxPriceFunc(input);
    this->_orderByFunc(input);
}

void PaddockToSellFilterMessage::_areaIdFunc(ICustomDataInput &input) {
    this->areaId = input.readInt();
}

void PaddockToSellFilterMessage::_atLeastNbMountFunc(ICustomDataInput &input) {
    this->atLeastNbMount = input.readByte();
}

void PaddockToSellFilterMessage::_atLeastNbMachineFunc(ICustomDataInput &input) {
    this->atLeastNbMachine = input.readByte();
}

void PaddockToSellFilterMessage::_maxPriceFunc(ICustomDataInput &input) {
    this->maxPrice = input.readVarUhLong();

}

void PaddockToSellFilterMessage::_orderByFunc(ICustomDataInput &input) {
    this->orderBy = input.readByte();

}

