#include "FightResultListEntry.h"

void FightResultListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultListEntry(input);
}

void FightResultListEntry::deserializeAs_FightResultListEntry(ICustomDataInput &input) {
    this->_outcomeFunc(input);
    this->_waveFunc(input);
    this->rewards.deserialize(input);
}

void FightResultListEntry::_outcomeFunc(ICustomDataInput &input) {
    this->outcome = input.readVarUhShort();

}

void FightResultListEntry::_waveFunc(ICustomDataInput &input) {
    this->wave = input.readByte();

}

