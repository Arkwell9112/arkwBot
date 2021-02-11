#include "GuildInformationsGeneralMessage.h"

void GuildInformationsGeneralMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInformationsGeneralMessage(input);
}

void GuildInformationsGeneralMessage::deserializeAs_GuildInformationsGeneralMessage(ICustomDataInput &input) {
    this->_abandonnedPaddockFunc(input);
    this->_levelFunc(input);
    this->_expLevelFloorFunc(input);
    this->_experienceFunc(input);
    this->_expNextLevelFloorFunc(input);
    this->_creationDateFunc(input);
    this->_nbTotalMembersFunc(input);
    this->_nbConnectedMembersFunc(input);
}

void GuildInformationsGeneralMessage::_abandonnedPaddockFunc(ICustomDataInput &input) {
    this->abandonnedPaddock = input.readBoolean();
}

void GuildInformationsGeneralMessage::_levelFunc(ICustomDataInput &input) {
    this->level = input.readUnsignedByte();

}

void GuildInformationsGeneralMessage::_expLevelFloorFunc(ICustomDataInput &input) {
    this->expLevelFloor = input.readVarUhLong();

}

void GuildInformationsGeneralMessage::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void GuildInformationsGeneralMessage::_expNextLevelFloorFunc(ICustomDataInput &input) {
    this->expNextLevelFloor = input.readVarUhLong();

}

void GuildInformationsGeneralMessage::_creationDateFunc(ICustomDataInput &input) {
    this->creationDate = input.readInt();

}

void GuildInformationsGeneralMessage::_nbTotalMembersFunc(ICustomDataInput &input) {
    this->nbTotalMembers = input.readVarUhShort();

}

void GuildInformationsGeneralMessage::_nbConnectedMembersFunc(ICustomDataInput &input) {
    this->nbConnectedMembers = input.readVarUhShort();

}

