#include "ObjectEffectDate.h"

void ObjectEffectDate::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectDate(input);
}

void ObjectEffectDate::deserializeAs_ObjectEffectDate(ICustomDataInput &input) {
    ObjectEffect::deserialize(input);
    this->_yearFunc(input);
    this->_monthFunc(input);
    this->_dayFunc(input);
    this->_hourFunc(input);
    this->_minuteFunc(input);
}

void ObjectEffectDate::_yearFunc(ICustomDataInput &input) {
    this->year = input.readVarUhShort();

}

void ObjectEffectDate::_monthFunc(ICustomDataInput &input) {
    this->month = input.readByte();

}

void ObjectEffectDate::_dayFunc(ICustomDataInput &input) {
    this->day = input.readByte();

}

void ObjectEffectDate::_hourFunc(ICustomDataInput &input) {
    this->hour = input.readByte();

}

void ObjectEffectDate::_minuteFunc(ICustomDataInput &input) {
    this->minute = input.readByte();

}

