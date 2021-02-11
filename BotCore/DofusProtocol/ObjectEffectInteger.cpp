#include "ObjectEffectInteger.h"

void ObjectEffectInteger::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectInteger(input);
}

void ObjectEffectInteger::deserializeAs_ObjectEffectInteger(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_valueFunc(input);
}

void ObjectEffectInteger::_valueFunc(ICustomDataInput &input) {
    this->value = input.readVarUhInt();

}

