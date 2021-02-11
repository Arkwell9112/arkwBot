#include "TeleportBuddiesMessage.h"

void TeleportBuddiesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportBuddiesMessage(input);
}

void TeleportBuddiesMessage::deserializeAs_TeleportBuddiesMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
}

void TeleportBuddiesMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

