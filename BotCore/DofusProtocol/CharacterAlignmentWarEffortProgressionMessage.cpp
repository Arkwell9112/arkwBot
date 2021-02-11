#include "CharacterAlignmentWarEffortProgressionMessage.h"

void CharacterAlignmentWarEffortProgressionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterAlignmentWarEffortProgressionMessage(input);
}

void CharacterAlignmentWarEffortProgressionMessage::deserializeAs_CharacterAlignmentWarEffortProgressionMessage(
        ICustomDataInput &input) {
    this->_alignmentWarEffortDailyLimitFunc(input);
    this->_alignmentWarEffortDailyDonationFunc(input);
    this->_alignmentWarEffortPersonalDonationFunc(input);
}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortDailyLimitFunc(ICustomDataInput &input) {
    this->alignmentWarEffortDailyLimit = input.readVarUhLong();

}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortDailyDonationFunc(ICustomDataInput &input) {
    this->alignmentWarEffortDailyDonation = input.readVarUhLong();

}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortPersonalDonationFunc(ICustomDataInput &input) {
    this->alignmentWarEffortPersonalDonation = input.readVarUhLong();

}

