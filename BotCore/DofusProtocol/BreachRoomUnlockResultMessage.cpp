#include "BreachRoomUnlockResultMessage.h"

void BreachRoomUnlockResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachRoomUnlockResultMessage(input);
}

void BreachRoomUnlockResultMessage::deserializeAs_BreachRoomUnlockResultMessage(ICustomDataInput &input) {
    this->_roomIdFunc(input);
    this->_resultFunc(input);
}

void BreachRoomUnlockResultMessage::_roomIdFunc(ICustomDataInput &input) {
    this->roomId = input.readByte();

}

void BreachRoomUnlockResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

