#include "TeleportToBuddyOfferMessage.h"

void TeleportToBuddyOfferMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportToBuddyOfferMessage(input);
}

void TeleportToBuddyOfferMessage::deserializeAs_TeleportToBuddyOfferMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
    this->_timeLeftFunc(input);
}

void TeleportToBuddyOfferMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void TeleportToBuddyOfferMessage::_buddyIdFunc(ICustomDataInput &input) {
    this->buddyId = input.readVarUhLong();

}

void TeleportToBuddyOfferMessage::_timeLeftFunc(ICustomDataInput &input) {
    this->timeLeft = input.readVarUhInt();

}

