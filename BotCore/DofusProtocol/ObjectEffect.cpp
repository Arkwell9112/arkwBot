#include "ObjectEffect.h"

void ObjectEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffect(input);
}

void ObjectEffect::deserializeAs_ObjectEffect(ICustomDataInput &input) {
    this->_actionIdFunc(input);
}

void ObjectEffect::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readVarUhShort();

}

