#include "GameContextRemoveElementWithEventMessage.h"

void GameContextRemoveElementWithEventMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextRemoveElementWithEventMessage(input);
}

void GameContextRemoveElementWithEventMessage::deserializeAs_GameContextRemoveElementWithEventMessage(
        ICustomDataInput &input) {
    GameContextRemoveElementMessage::deserialize(input);
    this->_elementEventIdFunc(input);
}

void GameContextRemoveElementWithEventMessage::_elementEventIdFunc(ICustomDataInput &input) {
    this->elementEventId = input.readByte();

}

