#include "HumanOptionOrnament.h"

void HumanOptionOrnament::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionOrnament(input);
}

void HumanOptionOrnament::deserializeAs_HumanOptionOrnament(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->_ornamentIdFunc(input);
    this->_levelFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
}

void HumanOptionOrnament::_ornamentIdFunc(ICustomDataInput &input) {
    this->ornamentId = input.readVarUhShort();

}

void HumanOptionOrnament::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void HumanOptionOrnament::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarShort();
}

void HumanOptionOrnament::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

