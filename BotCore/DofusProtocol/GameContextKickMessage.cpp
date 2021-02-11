#include "GameContextKickMessage.h"

void GameContextKickMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextKickMessage(input);
}

void GameContextKickMessage::deserializeAs_GameContextKickMessage(ICustomDataInput &input) {
    this->_targetIdFunc(input);
}

void GameContextKickMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

