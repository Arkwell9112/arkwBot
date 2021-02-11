#include "GameRolePlayDelayedObjectUseMessage.h"

void GameRolePlayDelayedObjectUseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayDelayedObjectUseMessage(input);
}

void GameRolePlayDelayedObjectUseMessage::deserializeAs_GameRolePlayDelayedObjectUseMessage(ICustomDataInput &input) {
    GameRolePlayDelayedActionMessage::deserialize(input);
    this->_objectGIDFunc(input);
}

void GameRolePlayDelayedObjectUseMessage::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

