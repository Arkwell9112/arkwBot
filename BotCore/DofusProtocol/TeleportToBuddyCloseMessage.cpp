#include "TeleportToBuddyCloseMessage.h"

void TeleportToBuddyCloseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportToBuddyCloseMessage(input);
}

void TeleportToBuddyCloseMessage::deserializeAs_TeleportToBuddyCloseMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
}

void TeleportToBuddyCloseMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void TeleportToBuddyCloseMessage::_buddyIdFunc(ICustomDataInput &input) {
    this->buddyId = input.readVarUhLong();

}

