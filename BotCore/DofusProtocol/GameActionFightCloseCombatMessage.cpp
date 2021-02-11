#include "GameActionFightCloseCombatMessage.h"

void GameActionFightCloseCombatMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightCloseCombatMessage(input);
}

void GameActionFightCloseCombatMessage::deserializeAs_GameActionFightCloseCombatMessage(ICustomDataInput &input) {
    AbstractGameActionFightTargetedAbilityMessage::deserialize(input);
    this->_weaponGenericIdFunc(input);
}

void GameActionFightCloseCombatMessage::_weaponGenericIdFunc(ICustomDataInput &input) {
    this->weaponGenericId = input.readVarUhShort();

}

