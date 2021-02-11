#include "ObjectEffectDice.h"

void ObjectEffectDice::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectDice(input);
}

void ObjectEffectDice::deserializeAs_ObjectEffectDice(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_diceNumFunc(input);
    this->_diceSideFunc(input);
    this->_diceConstFunc(input);
}

void ObjectEffectDice::_diceNumFunc(ICustomDataInput &input) {
    this->diceNum = input.readVarUhInt();

}

void ObjectEffectDice::_diceSideFunc(ICustomDataInput &input) {
    this->diceSide = input.readVarUhInt();

}

void ObjectEffectDice::_diceConstFunc(ICustomDataInput &input) {
    this->diceConst = input.readVarUhInt();

}

