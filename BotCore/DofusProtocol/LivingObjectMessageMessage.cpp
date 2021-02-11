#include "LivingObjectMessageMessage.h"

void LivingObjectMessageMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LivingObjectMessageMessage(input);
}

void LivingObjectMessageMessage::deserializeAs_LivingObjectMessageMessage(ICustomDataInput &input) {
    this->_msgIdFunc(input);
    this->_timeStampFunc(input);
    this->_ownerFunc(input);
    this->_objectGenericIdFunc(input);
}

void LivingObjectMessageMessage::_msgIdFunc(ICustomDataInput &input) {
    this->msgId = input.readVarUhShort();

}

void LivingObjectMessageMessage::_timeStampFunc(ICustomDataInput &input) {
    this->timeStamp = input.readInt();

}

void LivingObjectMessageMessage::_ownerFunc(ICustomDataInput &input) {
    this->owner = input.readUTF();
}

void LivingObjectMessageMessage::_objectGenericIdFunc(ICustomDataInput &input) {
    this->objectGenericId = input.readVarUhShort();

}

