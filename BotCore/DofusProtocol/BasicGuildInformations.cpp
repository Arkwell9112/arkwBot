#include "BasicGuildInformations.h"

void BasicGuildInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicGuildInformations(input);
}

void BasicGuildInformations::deserializeAs_BasicGuildInformations(ICustomDataInput &input) {
    AbstractSocialGroupInfos::deserialize(input);
    this->_guildIdFunc(input);
    this->_guildNameFunc(input);
    this->_guildLevelFunc(input);
}

void BasicGuildInformations::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

void BasicGuildInformations::_guildNameFunc(ICustomDataInput &input) {
    this->guildName = input.readUTF();
}

void BasicGuildInformations::_guildLevelFunc(ICustomDataInput &input) {
    this->guildLevel = input.readUnsignedByte();

}

