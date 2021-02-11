#ifndef FIGHTRESULTEXPERIENCEDATA
#define FIGHTRESULTEXPERIENCEDATA

#include "../IO/ICustomDataInput.h"
#include "FightResultAdditionalData.h"

class FightResultExperienceData : public FightResultAdditionalData {
public:
    double experience = 0;
    bool showExperience = false;
    double experienceLevelFloor = 0;
    bool showExperienceLevelFloor = false;
    double experienceNextLevelFloor = 0;
    bool showExperienceNextLevelFloor = false;
    double experienceFightDelta = 0;
    bool showExperienceFightDelta = false;
    double experienceForGuild = 0;
    bool showExperienceForGuild = false;
    double experienceForMount = 0;
    bool showExperienceForMount = false;
    bool isIncarnationExperience = false;
    unsigned int rerollExperienceMul = 0;
    unsigned int protocolId = 5733;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultExperienceData(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _experienceLevelFloorFunc(ICustomDataInput &input);

    void _experienceNextLevelFloorFunc(ICustomDataInput &input);

    void _experienceFightDeltaFunc(ICustomDataInput &input);

    void _experienceForGuildFunc(ICustomDataInput &input);

    void _experienceForMountFunc(ICustomDataInput &input);

    void _rerollExperienceMulFunc(ICustomDataInput &input);
};

#endif