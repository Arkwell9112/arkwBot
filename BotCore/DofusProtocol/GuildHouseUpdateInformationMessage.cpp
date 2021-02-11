#include "GuildHouseUpdateInformationMessage.h"

void GuildHouseUpdateInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildHouseUpdateInformationMessage(input);
}

void GuildHouseUpdateInformationMessage::deserializeAs_GuildHouseUpdateInformationMessage(ICustomDataInput &input) {
    this->housesInformations.deserialize(input);
}

