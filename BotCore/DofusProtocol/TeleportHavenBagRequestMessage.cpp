#include "TeleportHavenBagRequestMessage.h"

void TeleportHavenBagRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportHavenBagRequestMessage(input);
}

void TeleportHavenBagRequestMessage::deserializeAs_TeleportHavenBagRequestMessage(ICustomDataInput &input) {
    this->_guestIdFunc(input);
}

void TeleportHavenBagRequestMessage::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

