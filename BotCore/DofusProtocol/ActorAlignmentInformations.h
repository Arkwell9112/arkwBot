#ifndef ACTORALIGNMENTINFORMATIONS
#define ACTORALIGNMENTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ActorAlignmentInformations : public NetworkInterface {
public:
    int alignmentSide = 0;
    unsigned int alignmentValue = 0;
    unsigned int alignmentGrade = 0;
    double characterPower = 0;
    unsigned int protocolId = 3998;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ActorAlignmentInformations(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _alignmentValueFunc(ICustomDataInput &input);

    void _alignmentGradeFunc(ICustomDataInput &input);

    void _characterPowerFunc(ICustomDataInput &input);
};

#endif