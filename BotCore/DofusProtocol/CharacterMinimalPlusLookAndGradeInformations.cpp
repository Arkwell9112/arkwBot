#include "CharacterMinimalPlusLookAndGradeInformations.h"

void CharacterMinimalPlusLookAndGradeInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalPlusLookAndGradeInformations(input);
}

void CharacterMinimalPlusLookAndGradeInformations::deserializeAs_CharacterMinimalPlusLookAndGradeInformations(
        ICustomDataInput &input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->_gradeFunc(input);
}

void CharacterMinimalPlusLookAndGradeInformations::_gradeFunc(ICustomDataInput &input) {
    this->grade = input.readVarUhInt();

}

