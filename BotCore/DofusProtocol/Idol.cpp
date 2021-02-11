#include "Idol.h"

void Idol::deserialize(ICustomDataInput &input) {
    this->deserializeAs_Idol(input);
}

void Idol::deserializeAs_Idol(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_xpBonusPercentFunc(input);
    this->_dropBonusPercentFunc(input);
}

void Idol::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void Idol::_xpBonusPercentFunc(ICustomDataInput &input) {
    this->xpBonusPercent = input.readVarUhShort();

}

void Idol::_dropBonusPercentFunc(ICustomDataInput &input) {
    this->dropBonusPercent = input.readVarUhShort();

}

