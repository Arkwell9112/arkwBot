#include "ActorExtendedAlignmentInformations.h"

void ActorExtendedAlignmentInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ActorExtendedAlignmentInformations(input);
}

void ActorExtendedAlignmentInformations::deserializeAs_ActorExtendedAlignmentInformations(ICustomDataInput &input) {
    ActorAlignmentInformations::deserialize(input);
    this->_honorFunc(input);
    this->_honorGradeFloorFunc(input);
    this->_honorNextGradeFloorFunc(input);
    this->_aggressableFunc(input);
}

void ActorExtendedAlignmentInformations::_honorFunc(ICustomDataInput &input) {
    this->honor = input.readVarUhShort();

}

void ActorExtendedAlignmentInformations::_honorGradeFloorFunc(ICustomDataInput &input) {
    this->honorGradeFloor = input.readVarUhShort();

}

void ActorExtendedAlignmentInformations::_honorNextGradeFloorFunc(ICustomDataInput &input) {
    this->honorNextGradeFloor = input.readVarUhShort();

}

void ActorExtendedAlignmentInformations::_aggressableFunc(ICustomDataInput &input) {
    this->aggressable = input.readByte();

}

