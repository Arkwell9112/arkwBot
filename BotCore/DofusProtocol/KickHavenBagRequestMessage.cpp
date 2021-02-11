#include "KickHavenBagRequestMessage.h"

void KickHavenBagRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_KickHavenBagRequestMessage(input);
}

void KickHavenBagRequestMessage::deserializeAs_KickHavenBagRequestMessage(ICustomDataInput &input) {
    this->_guestIdFunc(input);
}

void KickHavenBagRequestMessage::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

