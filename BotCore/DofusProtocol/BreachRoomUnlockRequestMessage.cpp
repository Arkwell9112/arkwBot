#include "BreachRoomUnlockRequestMessage.h"

void BreachRoomUnlockRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachRoomUnlockRequestMessage(input);
}

void BreachRoomUnlockRequestMessage::deserializeAs_BreachRoomUnlockRequestMessage(ICustomDataInput &input) {
    this->_roomIdFunc(input);
}

void BreachRoomUnlockRequestMessage::_roomIdFunc(ICustomDataInput &input) {
    this->roomId = input.readByte();

}

