#include "ObjectEffectMinMax.h"

void ObjectEffectMinMax::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectMinMax(input);
}

void ObjectEffectMinMax::deserializeAs_ObjectEffectMinMax(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_minFunc(input);
    this->_maxFunc(input);
}

void ObjectEffectMinMax::_minFunc(ICustomDataInput &input) {
    this->min = input.readVarUhInt();

}

void ObjectEffectMinMax::_maxFunc(ICustomDataInput &input) {
    this->max = input.readVarUhInt();

}

