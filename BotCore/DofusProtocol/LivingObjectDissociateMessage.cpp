#include "LivingObjectDissociateMessage.h"

void LivingObjectDissociateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LivingObjectDissociateMessage(input);
}

void LivingObjectDissociateMessage::deserializeAs_LivingObjectDissociateMessage(ICustomDataInput &input) {
    this->_livingUIDFunc(input);
    this->_livingPositionFunc(input);
}

void LivingObjectDissociateMessage::_livingUIDFunc(ICustomDataInput &input) {
    this->livingUID = input.readVarUhInt();

}

void LivingObjectDissociateMessage::_livingPositionFunc(ICustomDataInput &input) {
    this->livingPosition = input.readUnsignedByte();

}

