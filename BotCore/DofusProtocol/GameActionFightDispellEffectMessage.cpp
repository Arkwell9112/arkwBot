#include "GameActionFightDispellEffectMessage.h"

void GameActionFightDispellEffectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDispellEffectMessage(input);
}

void GameActionFightDispellEffectMessage::deserializeAs_GameActionFightDispellEffectMessage(ICustomDataInput &input) {
    GameActionFightDispellMessage::deserialize(input);
    this->_boostUIDFunc(input);
}

void GameActionFightDispellEffectMessage::_boostUIDFunc(ICustomDataInput &input) {
    this->boostUID = input.readInt();

}

