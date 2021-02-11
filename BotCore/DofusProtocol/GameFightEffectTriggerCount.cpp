#include "GameFightEffectTriggerCount.h"

void GameFightEffectTriggerCount::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightEffectTriggerCount(input);
}

void GameFightEffectTriggerCount::deserializeAs_GameFightEffectTriggerCount(ICustomDataInput &input) {
    this->_effectIdFunc(input);
    this->_targetIdFunc(input);
    this->_countFunc(input);
}

void GameFightEffectTriggerCount::_effectIdFunc(ICustomDataInput &input) {
    this->effectId = input.readVarUhInt();

}

void GameFightEffectTriggerCount::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameFightEffectTriggerCount::_countFunc(ICustomDataInput &input) {
    this->count = input.readByte();

}

