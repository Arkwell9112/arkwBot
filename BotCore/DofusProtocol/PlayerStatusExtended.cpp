#include "PlayerStatusExtended.h"

void PlayerStatusExtended::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PlayerStatusExtended(input);
}

void PlayerStatusExtended::deserializeAs_PlayerStatusExtended(ICustomDataInput &input) {
    PlayerStatus::deserialize(input);
    this->_messageFunc(input);
}

void PlayerStatusExtended::_messageFunc(ICustomDataInput &input) {
    this->message = input.readUTF();
}

