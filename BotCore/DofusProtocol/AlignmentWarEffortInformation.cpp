#include "AlignmentWarEffortInformation.h"

void AlignmentWarEffortInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentWarEffortInformation(input);
}

void AlignmentWarEffortInformation::deserializeAs_AlignmentWarEffortInformation(ICustomDataInput &input) {
    this->_alignmentSideFunc(input);
    this->_alignmentWarEffortFunc(input);
}

void AlignmentWarEffortInformation::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void AlignmentWarEffortInformation::_alignmentWarEffortFunc(ICustomDataInput &input) {
    this->alignmentWarEffort = input.readVarUhLong();

}

