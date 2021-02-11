#include "GuildCreationResultMessage.h"

void GuildCreationResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildCreationResultMessage(input);
}

void GuildCreationResultMessage::deserializeAs_GuildCreationResultMessage(ICustomDataInput &input) {
    this->_resultFunc(input);
}

void GuildCreationResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

