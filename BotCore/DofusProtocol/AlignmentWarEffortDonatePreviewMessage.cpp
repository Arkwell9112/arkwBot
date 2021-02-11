#include "AlignmentWarEffortDonatePreviewMessage.h"

void AlignmentWarEffortDonatePreviewMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentWarEffortDonatePreviewMessage(input);
}

void
AlignmentWarEffortDonatePreviewMessage::deserializeAs_AlignmentWarEffortDonatePreviewMessage(ICustomDataInput &input) {
    this->_xpFunc(input);
}

void AlignmentWarEffortDonatePreviewMessage::_xpFunc(ICustomDataInput &input) {
    this->xp = input.readDouble();

}

