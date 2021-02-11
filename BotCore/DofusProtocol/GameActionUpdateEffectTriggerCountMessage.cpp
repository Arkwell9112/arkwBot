#include "GameActionUpdateEffectTriggerCountMessage.h"

void GameActionUpdateEffectTriggerCountMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionUpdateEffectTriggerCountMessage(input);
}

void GameActionUpdateEffectTriggerCountMessage::deserializeAs_GameActionUpdateEffectTriggerCountMessage(
        ICustomDataInput &input) {
    GameFightEffectTriggerCount _item1;
    unsigned int _targetIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _targetIdsLen; _i1++) {
        _item1.deserialize(input);
        this->targetIds.push_back(_item1);
    }
}

void GameActionUpdateEffectTriggerCountMessage::_targetIdsFunc(ICustomDataInput &input) {
    GameFightEffectTriggerCount _item;
    _item.deserialize(input);
    this->targetIds.push_back(_item);
}

