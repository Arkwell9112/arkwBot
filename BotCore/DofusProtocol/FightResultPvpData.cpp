#include "FightResultPvpData.h"

void FightResultPvpData::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultPvpData(input);
}

void FightResultPvpData::deserializeAs_FightResultPvpData(ICustomDataInput &input) {
    FightResultAdditionalData::deserialize(input);
    this->_gradeFunc(input);
    this->_minHonorForGradeFunc(input);
    this->_maxHonorForGradeFunc(input);
    this->_honorFunc(input);
    this->_honorDeltaFunc(input);
}

void FightResultPvpData::_gradeFunc(ICustomDataInput &input) {
    this->grade = input.readUnsignedByte();

}

void FightResultPvpData::_minHonorForGradeFunc(ICustomDataInput &input) {
    this->minHonorForGrade = input.readVarUhShort();

}

void FightResultPvpData::_maxHonorForGradeFunc(ICustomDataInput &input) {
    this->maxHonorForGrade = input.readVarUhShort();

}

void FightResultPvpData::_honorFunc(ICustomDataInput &input) {
    this->honor = input.readVarUhShort();

}

void FightResultPvpData::_honorDeltaFunc(ICustomDataInput &input) {
    this->honorDelta = input.readVarShort();
}

