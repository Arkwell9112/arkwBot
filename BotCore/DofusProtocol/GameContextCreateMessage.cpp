#include "GameContextCreateMessage.h"

void GameContextCreateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextCreateMessage(input);
}

void GameContextCreateMessage::deserializeAs_GameContextCreateMessage(ICustomDataInput &input) {
    this->_contextFunc(input);
}

void GameContextCreateMessage::_contextFunc(ICustomDataInput &input) {
    this->context = input.readByte();

}

