#include "GameFightLeaveMessage.h"

void GameFightLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightLeaveMessage(input);
}

void GameFightLeaveMessage::deserializeAs_GameFightLeaveMessage(ICustomDataInput &input) {
    this->_charIdFunc(input);
}

void GameFightLeaveMessage::_charIdFunc(ICustomDataInput &input) {
    this->charId = input.readDouble();

}

