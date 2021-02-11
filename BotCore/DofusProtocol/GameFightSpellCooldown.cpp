#include "GameFightSpellCooldown.h"

void GameFightSpellCooldown::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightSpellCooldown(input);
}

void GameFightSpellCooldown::deserializeAs_GameFightSpellCooldown(ICustomDataInput &input) {
    this->_spellIdFunc(input);
    this->_cooldownFunc(input);
}

void GameFightSpellCooldown::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readInt();
}

void GameFightSpellCooldown::_cooldownFunc(ICustomDataInput &input) {
    this->cooldown = input.readByte();

}

