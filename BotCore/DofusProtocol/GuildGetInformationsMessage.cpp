#include "GuildGetInformationsMessage.h"

void GuildGetInformationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildGetInformationsMessage(input);
}

void GuildGetInformationsMessage::deserializeAs_GuildGetInformationsMessage(ICustomDataInput &input) {
    this->_infoTypeFunc(input);
}

void GuildGetInformationsMessage::_infoTypeFunc(ICustomDataInput &input) {
    this->infoType = input.readByte();

}

