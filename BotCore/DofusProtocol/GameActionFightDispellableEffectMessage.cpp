#include "../ProtocolTypeManager.h"
#include "GameActionFightDispellableEffectMessage.h"

void GameActionFightDispellableEffectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDispellableEffectMessage(input);
}

void GameActionFightDispellableEffectMessage::deserializeAs_GameActionFightDispellableEffectMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->effect = ProtocolTypeManager::getObject<AbstractFightDispellableEffect>(input, _id1);
}

