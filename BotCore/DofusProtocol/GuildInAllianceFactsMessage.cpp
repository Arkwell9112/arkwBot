#include "GuildInAllianceFactsMessage.h"

void GuildInAllianceFactsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInAllianceFactsMessage(input);
}

void GuildInAllianceFactsMessage::deserializeAs_GuildInAllianceFactsMessage(ICustomDataInput &input) {
    GuildFactsMessage::deserialize(input);
    this->allianceInfos.deserialize(input);
}

