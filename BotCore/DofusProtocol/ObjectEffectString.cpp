#include "ObjectEffectString.h"

void ObjectEffectString::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectString(input);
}

void ObjectEffectString::deserializeAs_ObjectEffectString(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_valueFunc(input);
}

void ObjectEffectString::_valueFunc(ICustomDataInput &input) {
    this->value = input.readUTF();
}

