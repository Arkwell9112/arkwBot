#include "BreachTeleportResponseMessage.h"

void BreachTeleportResponseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachTeleportResponseMessage(input);
}

void BreachTeleportResponseMessage::deserializeAs_BreachTeleportResponseMessage(ICustomDataInput &input) {
    this->_teleportedFunc(input);
}

void BreachTeleportResponseMessage::_teleportedFunc(ICustomDataInput &input) {
    this->teleported = input.readBoolean();
}

