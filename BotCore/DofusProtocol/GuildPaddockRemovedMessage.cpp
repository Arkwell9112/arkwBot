#include "GuildPaddockRemovedMessage.h"

void GuildPaddockRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildPaddockRemovedMessage(input);
}

void GuildPaddockRemovedMessage::deserializeAs_GuildPaddockRemovedMessage(ICustomDataInput &input) {
    this->_paddockIdFunc(input);
}

void GuildPaddockRemovedMessage::_paddockIdFunc(ICustomDataInput &input) {
    this->paddockId = input.readDouble();

}

