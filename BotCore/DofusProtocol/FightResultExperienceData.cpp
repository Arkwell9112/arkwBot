#include "../IO/BooleanByteWrapper.h"
#include "FightResultExperienceData.h"

void FightResultExperienceData::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultExperienceData(input);
}

void FightResultExperienceData::deserializeAs_FightResultExperienceData(ICustomDataInput &input) {
    FightResultAdditionalData::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_experienceFunc(input);
    this->_experienceLevelFloorFunc(input);
    this->_experienceNextLevelFloorFunc(input);
    this->_experienceFightDeltaFunc(input);
    this->_experienceForGuildFunc(input);
    this->_experienceForMountFunc(input);
    this->_rerollExperienceMulFunc(input);
}

void FightResultExperienceData::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->showExperience = BooleanByteWrapper::getFlag(_box0, 0);
    this->showExperienceLevelFloor = BooleanByteWrapper::getFlag(_box0, 1);
    this->showExperienceNextLevelFloor = BooleanByteWrapper::getFlag(_box0, 2);
    this->showExperienceFightDelta = BooleanByteWrapper::getFlag(_box0, 3);
    this->showExperienceForGuild = BooleanByteWrapper::getFlag(_box0, 4);
    this->showExperienceForMount = BooleanByteWrapper::getFlag(_box0, 5);
    this->isIncarnationExperience = BooleanByteWrapper::getFlag(_box0, 6);
}

void FightResultExperienceData::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void FightResultExperienceData::_experienceLevelFloorFunc(ICustomDataInput &input) {
    this->experienceLevelFloor = input.readVarUhLong();

}

void FightResultExperienceData::_experienceNextLevelFloorFunc(ICustomDataInput &input) {
    this->experienceNextLevelFloor = input.readVarUhLong();

}

void FightResultExperienceData::_experienceFightDeltaFunc(ICustomDataInput &input) {
    this->experienceFightDelta = input.readVarUhLong();

}

void FightResultExperienceData::_experienceForGuildFunc(ICustomDataInput &input) {
    this->experienceForGuild = input.readVarUhLong();

}

void FightResultExperienceData::_experienceForMountFunc(ICustomDataInput &input) {
    this->experienceForMount = input.readVarUhLong();

}

void FightResultExperienceData::_rerollExperienceMulFunc(ICustomDataInput &input) {
    this->rerollExperienceMul = input.readByte();

}

