#include "GameFightOptionToggleMessage.h"

void GameFightOptionToggleMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightOptionToggleMessage(input);
}

void GameFightOptionToggleMessage::deserializeAs_GameFightOptionToggleMessage(ICustomDataInput &input) {
    this->_optionFunc(input);
}

void GameFightOptionToggleMessage::_optionFunc(ICustomDataInput &input) {
    this->option = input.readByte();

}

