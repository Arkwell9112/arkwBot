#include "GameActionFightTriggerEffectMessage.h"

void GameActionFightTriggerEffectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightTriggerEffectMessage(input);
}

void GameActionFightTriggerEffectMessage::deserializeAs_GameActionFightTriggerEffectMessage(ICustomDataInput &input) {
    GameActionFightDispellEffectMessage::deserialize(input);
}

