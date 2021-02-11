#include "ObjectEffectLadder.h"

void ObjectEffectLadder::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectLadder(input);
}

void ObjectEffectLadder::deserializeAs_ObjectEffectLadder(ICustomDataInput &input) {
    ObjectEffectCreature::deserialize(input);
    this->_monsterCountFunc(input);
}

void ObjectEffectLadder::_monsterCountFunc(ICustomDataInput &input) {
    this->monsterCount = input.readVarUhInt();

}

