#include "FightTriggeredEffect.h"

void FightTriggeredEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTriggeredEffect(input);
}

void FightTriggeredEffect::deserializeAs_FightTriggeredEffect(ICustomDataInput &input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_param1Func(input);
    this->_param2Func(input);
    this->_param3Func(input);
    this->_delayFunc(input);
}

void FightTriggeredEffect::_param1Func(ICustomDataInput &input) {
    this->param1 = input.readInt();
}

void FightTriggeredEffect::_param2Func(ICustomDataInput &input) {
    this->param2 = input.readInt();
}

void FightTriggeredEffect::_param3Func(ICustomDataInput &input) {
    this->param3 = input.readInt();
}

void FightTriggeredEffect::_delayFunc(ICustomDataInput &input) {
    this->delay = input.readShort();
}

