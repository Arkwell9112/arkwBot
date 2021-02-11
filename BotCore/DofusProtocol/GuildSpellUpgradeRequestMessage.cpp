#include "GuildSpellUpgradeRequestMessage.h"

void GuildSpellUpgradeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildSpellUpgradeRequestMessage(input);
}

void GuildSpellUpgradeRequestMessage::deserializeAs_GuildSpellUpgradeRequestMessage(ICustomDataInput &input) {
    this->_spellIdFunc(input);
}

void GuildSpellUpgradeRequestMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readInt();

}

