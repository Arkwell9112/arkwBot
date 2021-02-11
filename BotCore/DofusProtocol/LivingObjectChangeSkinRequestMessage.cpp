#include "LivingObjectChangeSkinRequestMessage.h"

void LivingObjectChangeSkinRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LivingObjectChangeSkinRequestMessage(input);
}

void LivingObjectChangeSkinRequestMessage::deserializeAs_LivingObjectChangeSkinRequestMessage(ICustomDataInput &input) {
    this->_livingUIDFunc(input);
    this->_livingPositionFunc(input);
    this->_skinIdFunc(input);
}

void LivingObjectChangeSkinRequestMessage::_livingUIDFunc(ICustomDataInput &input) {
    this->livingUID = input.readVarUhInt();

}

void LivingObjectChangeSkinRequestMessage::_livingPositionFunc(ICustomDataInput &input) {
    this->livingPosition = input.readUnsignedByte();

}

void LivingObjectChangeSkinRequestMessage::_skinIdFunc(ICustomDataInput &input) {
    this->skinId = input.readVarUhInt();

}

