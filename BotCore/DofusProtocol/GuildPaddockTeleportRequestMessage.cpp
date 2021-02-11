#include "GuildPaddockTeleportRequestMessage.h"

void GuildPaddockTeleportRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildPaddockTeleportRequestMessage(input);
}

void GuildPaddockTeleportRequestMessage::deserializeAs_GuildPaddockTeleportRequestMessage(ICustomDataInput &input) {
    this->_paddockIdFunc(input);
}

void GuildPaddockTeleportRequestMessage::_paddockIdFunc(ICustomDataInput &input) {
    this->paddockId = input.readDouble();

}

