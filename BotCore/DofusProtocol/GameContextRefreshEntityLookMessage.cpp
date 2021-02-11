#include "GameContextRefreshEntityLookMessage.h"

void GameContextRefreshEntityLookMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextRefreshEntityLookMessage(input);
}

void GameContextRefreshEntityLookMessage::deserializeAs_GameContextRefreshEntityLookMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->look.deserialize(input);
}

void GameContextRefreshEntityLookMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

