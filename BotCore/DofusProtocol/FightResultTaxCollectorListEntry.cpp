#include "FightResultTaxCollectorListEntry.h"

void FightResultTaxCollectorListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultTaxCollectorListEntry(input);
}

void FightResultTaxCollectorListEntry::deserializeAs_FightResultTaxCollectorListEntry(ICustomDataInput &input) {
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
    this->guildInfo.deserialize(input);
    this->_experienceForGuildFunc(input);
}

void FightResultTaxCollectorListEntry::_levelFunc(ICustomDataInput &input) {
    this->level = input.readUnsignedByte();

}

void FightResultTaxCollectorListEntry::_experienceForGuildFunc(ICustomDataInput &input) {
    this->experienceForGuild = input.readInt();
}

