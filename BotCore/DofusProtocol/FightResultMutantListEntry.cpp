#include "FightResultMutantListEntry.h"

void FightResultMutantListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultMutantListEntry(input);
}

void FightResultMutantListEntry::deserializeAs_FightResultMutantListEntry(ICustomDataInput &input) {
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
}

void FightResultMutantListEntry::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

