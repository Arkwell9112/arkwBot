#include "TeleportToBuddyAnswerMessage.h"

void TeleportToBuddyAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportToBuddyAnswerMessage(input);
}

void TeleportToBuddyAnswerMessage::deserializeAs_TeleportToBuddyAnswerMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
    this->_acceptFunc(input);
}

void TeleportToBuddyAnswerMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void TeleportToBuddyAnswerMessage::_buddyIdFunc(ICustomDataInput &input) {
    this->buddyId = input.readVarUhLong();

}

void TeleportToBuddyAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

