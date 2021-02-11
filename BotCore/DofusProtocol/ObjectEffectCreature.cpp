#include "ObjectEffectCreature.h"

void ObjectEffectCreature::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectCreature(input);
}

void ObjectEffectCreature::deserializeAs_ObjectEffectCreature(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_monsterFamilyIdFunc(input);
}

void ObjectEffectCreature::_monsterFamilyIdFunc(ICustomDataInput &input) {
    this->monsterFamilyId = input.readVarUhShort();

}

