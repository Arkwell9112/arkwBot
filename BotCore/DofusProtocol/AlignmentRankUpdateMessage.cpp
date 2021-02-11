#include "AlignmentRankUpdateMessage.h"

void AlignmentRankUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentRankUpdateMessage(input);
}

void AlignmentRankUpdateMessage::deserializeAs_AlignmentRankUpdateMessage(ICustomDataInput &input) {
    this->_alignmentRankFunc(input);
    this->_verboseFunc(input);
}

void AlignmentRankUpdateMessage::_alignmentRankFunc(ICustomDataInput &input) {
    this->alignmentRank = input.readByte();

}

void AlignmentRankUpdateMessage::_verboseFunc(ICustomDataInput &input) {
    this->verbose = input.readBoolean();
}

