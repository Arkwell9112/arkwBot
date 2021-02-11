#include "PlayerStatus.h"

void PlayerStatus::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PlayerStatus(input);
}

void PlayerStatus::deserializeAs_PlayerStatus(ICustomDataInput &input) {
    this->_statusIdFunc(input);
}

void PlayerStatus::_statusIdFunc(ICustomDataInput &input) {
    this->statusId = input.readByte();

}

