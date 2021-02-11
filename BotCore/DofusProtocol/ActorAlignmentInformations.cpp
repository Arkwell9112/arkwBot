#include "ActorAlignmentInformations.h"

void ActorAlignmentInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ActorAlignmentInformations(input);
}

void ActorAlignmentInformations::deserializeAs_ActorAlignmentInformations(ICustomDataInput &input) {
    this->_alignmentSideFunc(input);
    this->_alignmentValueFunc(input);
    this->_alignmentGradeFunc(input);
    this->_characterPowerFunc(input);
}

void ActorAlignmentInformations::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void ActorAlignmentInformations::_alignmentValueFunc(ICustomDataInput &input) {
    this->alignmentValue = input.readByte();

}

void ActorAlignmentInformations::_alignmentGradeFunc(ICustomDataInput &input) {
    this->alignmentGrade = input.readByte();

}

void ActorAlignmentInformations::_characterPowerFunc(ICustomDataInput &input) {
    this->characterPower = input.readDouble();

}

