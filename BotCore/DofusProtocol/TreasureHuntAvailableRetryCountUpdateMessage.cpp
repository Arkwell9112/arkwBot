#include "TreasureHuntAvailableRetryCountUpdateMessage.h"

void TreasureHuntAvailableRetryCountUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntAvailableRetryCountUpdateMessage(input);
}

void TreasureHuntAvailableRetryCountUpdateMessage::deserializeAs_TreasureHuntAvailableRetryCountUpdateMessage(
        ICustomDataInput &input) {
    this->_questTypeFunc(input);
    this->_availableRetryCountFunc(input);
}

void TreasureHuntAvailableRetryCountUpdateMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntAvailableRetryCountUpdateMessage::_availableRetryCountFunc(ICustomDataInput &input) {
    this->availableRetryCount = input.readInt();
}

