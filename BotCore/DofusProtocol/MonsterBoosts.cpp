#include "MonsterBoosts.h"

void MonsterBoosts::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MonsterBoosts(input);
}

void MonsterBoosts::deserializeAs_MonsterBoosts(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_xpBoostFunc(input);
    this->_dropBoostFunc(input);
}

void MonsterBoosts::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhInt();

}

void MonsterBoosts::_xpBoostFunc(ICustomDataInput &input) {
    this->xpBoost = input.readVarUhShort();

}

void MonsterBoosts::_dropBoostFunc(ICustomDataInput &input) {
    this->dropBoost = input.readVarUhShort();

}

