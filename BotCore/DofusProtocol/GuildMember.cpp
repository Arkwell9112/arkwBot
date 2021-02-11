#include "../IO/BooleanByteWrapper.h"
#include "../ProtocolTypeManager.h"
#include "GuildMember.h"

void GuildMember::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMember(input);
}

void GuildMember::deserializeAs_GuildMember(ICustomDataInput &input) {
    CharacterMinimalInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_breedFunc(input);
    this->_rankFunc(input);
    this->_givenExperienceFunc(input);
    this->_experienceGivenPercentFunc(input);
    this->_rightsFunc(input);
    this->_connectedFunc(input);
    this->_alignmentSideFunc(input);
    this->_hoursSinceLastConnectionFunc(input);
    this->_moodSmileyIdFunc(input);
    this->_accountIdFunc(input);
    this->_achievementPointsFunc(input);
    unsigned int _id13 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id13);
}

void GuildMember::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->havenBagShared = BooleanByteWrapper::getFlag(_box0, 1);
}

void GuildMember::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void GuildMember::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhShort();

}

void GuildMember::_givenExperienceFunc(ICustomDataInput &input) {
    this->givenExperience = input.readVarUhLong();

}

void GuildMember::_experienceGivenPercentFunc(ICustomDataInput &input) {
    this->experienceGivenPercent = input.readByte();

}

void GuildMember::_rightsFunc(ICustomDataInput &input) {
    this->rights = input.readVarUhInt();

}

void GuildMember::_connectedFunc(ICustomDataInput &input) {
    this->connected = input.readByte();

}

void GuildMember::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void GuildMember::_hoursSinceLastConnectionFunc(ICustomDataInput &input) {
    this->hoursSinceLastConnection = input.readUnsignedShort();

}

void GuildMember::_moodSmileyIdFunc(ICustomDataInput &input) {
    this->moodSmileyId = input.readVarUhShort();

}

void GuildMember::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void GuildMember::_achievementPointsFunc(ICustomDataInput &input) {
    this->achievementPoints = input.readInt();
}

