#include "FightResultFighterListEntry.h"

void FightResultFighterListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultFighterListEntry(input);
}

void FightResultFighterListEntry::deserializeAs_FightResultFighterListEntry(ICustomDataInput &input) {
    FightResultListEntry::deserialize(input);
    this->_idFunc(input);
    this->_aliveFunc(input);
}

void FightResultFighterListEntry::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void FightResultFighterListEntry::_aliveFunc(ICustomDataInput &input) {
    this->alive = input.readBoolean();
}

