#ifndef ACTOREXTENDEDALIGNMENTINFORMATIONS
#define ACTOREXTENDEDALIGNMENTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "ActorAlignmentInformations.h"

class ActorExtendedAlignmentInformations : public ActorAlignmentInformations {
public:
    unsigned int honor = 0;
    unsigned int honorGradeFloor = 0;
    unsigned int honorNextGradeFloor = 0;
    unsigned int aggressable = 0;
    unsigned int protocolId = 6118;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ActorExtendedAlignmentInformations(ICustomDataInput &input);

    void _honorFunc(ICustomDataInput &input);

    void _honorGradeFloorFunc(ICustomDataInput &input);

    void _honorNextGradeFloorFunc(ICustomDataInput &input);

    void _aggressableFunc(ICustomDataInput &input);
};

#endif