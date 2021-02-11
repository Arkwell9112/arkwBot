#include "ObjectUseMultipleMessage.h"

void ObjectUseMultipleMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectUseMultipleMessage(input);
}

void ObjectUseMultipleMessage::deserializeAs_ObjectUseMultipleMessage(ICustomDataInput &input) {
    ObjectUseMessage::deserialize(input);
    this->_quantityFunc(input);
}

void ObjectUseMultipleMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

