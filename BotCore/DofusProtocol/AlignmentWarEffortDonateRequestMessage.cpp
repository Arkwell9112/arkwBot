#include "AlignmentWarEffortDonateRequestMessage.h"

void AlignmentWarEffortDonateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentWarEffortDonateRequestMessage(input);
}

void
AlignmentWarEffortDonateRequestMessage::deserializeAs_AlignmentWarEffortDonateRequestMessage(ICustomDataInput &input) {
    this->_donationFunc(input);
}

void AlignmentWarEffortDonateRequestMessage::_donationFunc(ICustomDataInput &input) {
    this->donation = input.readVarUhLong();

}

