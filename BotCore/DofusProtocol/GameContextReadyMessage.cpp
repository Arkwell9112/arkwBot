#include "GameContextReadyMessage.h"

void GameContextReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextReadyMessage(input);
}

void GameContextReadyMessage::deserializeAs_GameContextReadyMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
}

void GameContextReadyMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

