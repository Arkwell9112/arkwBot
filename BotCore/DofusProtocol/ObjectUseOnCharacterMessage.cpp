#include "ObjectUseOnCharacterMessage.h"

void ObjectUseOnCharacterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectUseOnCharacterMessage(input);
}

void ObjectUseOnCharacterMessage::deserializeAs_ObjectUseOnCharacterMessage(ICustomDataInput &input) {
    ObjectUseMessage::deserialize(input);
    this->_characterIdFunc(input);
}

void ObjectUseOnCharacterMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

