#include "AlignmentWarEffortDonationResultMessage.h"

void AlignmentWarEffortDonationResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentWarEffortDonationResultMessage(input);
}

void AlignmentWarEffortDonationResultMessage::deserializeAs_AlignmentWarEffortDonationResultMessage(
        ICustomDataInput &input) {
    this->_resultFunc(input);
}

void AlignmentWarEffortDonationResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();
}

