#include "Achievement.h"

void Achievement::deserialize(ICustomDataInput &input) {
    this->deserializeAs_Achievement(input);
}

void Achievement::deserializeAs_Achievement(ICustomDataInput &input) {
    AchievementObjective _item2;
    AchievementStartedObjective _item3;
    this->_idFunc(input);
    unsigned int _finishedObjectiveLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _finishedObjectiveLen; _i2++) {
        _item2.deserialize(input);
        this->finishedObjective.push_back(_item2);
    }
    unsigned int _startedObjectivesLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _startedObjectivesLen; _i3++) {
        _item3.deserialize(input);
        this->startedObjectives.push_back(_item3);
    }
}

void Achievement::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void Achievement::_finishedObjectiveFunc(ICustomDataInput &input) {
    AchievementObjective _item;
    _item.deserialize(input);
    this->finishedObjective.push_back(_item);
}

void Achievement::_startedObjectivesFunc(ICustomDataInput &input) {
    AchievementStartedObjective _item;
    _item.deserialize(input);
    this->startedObjectives.push_back(_item);
}

