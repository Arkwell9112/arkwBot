#ifndef FIGHTRESULTPVPDATA
#define FIGHTRESULTPVPDATA

#include "../IO/ICustomDataInput.h"
#include "FightResultAdditionalData.h"

class FightResultPvpData : public FightResultAdditionalData {
public:
    unsigned int grade = 0;
    unsigned int minHonorForGrade = 0;
    unsigned int maxHonorForGrade = 0;
    unsigned int honor = 0;
    int honorDelta = 0;
    unsigned int protocolId = 9936;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultPvpData(ICustomDataInput &input);

    void _gradeFunc(ICustomDataInput &input);

    void _minHonorForGradeFunc(ICustomDataInput &input);

    void _maxHonorForGradeFunc(ICustomDataInput &input);

    void _honorFunc(ICustomDataInput &input);

    void _honorDeltaFunc(ICustomDataInput &input);
};

#endif