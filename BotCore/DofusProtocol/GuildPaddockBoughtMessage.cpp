#include "GuildPaddockBoughtMessage.h"

void GuildPaddockBoughtMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildPaddockBoughtMessage(input);
}

void GuildPaddockBoughtMessage::deserializeAs_GuildPaddockBoughtMessage(ICustomDataInput &input) {
    this->paddockInfo.deserialize(input);
}

