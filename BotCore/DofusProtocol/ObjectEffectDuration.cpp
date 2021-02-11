#include "ObjectEffectDuration.h"

void ObjectEffectDuration::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectDuration(input);
}

void ObjectEffectDuration::deserializeAs_ObjectEffectDuration(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_daysFunc(input);
    this->_hoursFunc(input);
    this->_minutesFunc(input);
}

void ObjectEffectDuration::_daysFunc(ICustomDataInput &input) {
    this->days = input.readVarUhShort();

}

void ObjectEffectDuration::_hoursFunc(ICustomDataInput &input) {
    this->hours = input.readByte();

}

void ObjectEffectDuration::_minutesFunc(ICustomDataInput &input) {
    this->minutes = input.readByte();

}

