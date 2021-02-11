#ifndef CHARACTERMINIMALPLUSLOOKANDGRADEINFORMATIONS
#define CHARACTERMINIMALPLUSLOOKANDGRADEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "CharacterMinimalPlusLookInformations.h"

class CharacterMinimalPlusLookAndGradeInformations : public CharacterMinimalPlusLookInformations {
public:
    unsigned int grade = 0;
    unsigned int protocolId = 9668;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalPlusLookAndGradeInformations(ICustomDataInput &input);

    void _gradeFunc(ICustomDataInput &input);
};

#endif