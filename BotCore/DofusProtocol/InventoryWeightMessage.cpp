#include "InventoryWeightMessage.h"

void InventoryWeightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InventoryWeightMessage(input);
}

void InventoryWeightMessage::deserializeAs_InventoryWeightMessage(ICustomDataInput &input) {
    this->_inventoryWeightFunc(input);
    this->_shopWeightFunc(input);
    this->_weightMaxFunc(input);
}

void InventoryWeightMessage::_inventoryWeightFunc(ICustomDataInput &input) {
    this->inventoryWeight = input.readVarUhInt();

}

void InventoryWeightMessage::_shopWeightFunc(ICustomDataInput &input) {
    this->shopWeight = input.readVarUhInt();

}

void InventoryWeightMessage::_weightMaxFunc(ICustomDataInput &input) {
    this->weightMax = input.readVarUhInt();

}

