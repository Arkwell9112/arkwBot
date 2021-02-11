#include "HumanOptionGuild.h"

void HumanOptionGuild::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionGuild(input);
}

void HumanOptionGuild::deserializeAs_HumanOptionGuild(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->guildInformations.deserialize(input);
}

