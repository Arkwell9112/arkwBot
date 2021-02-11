#include "ProtectedEntityWaitingForHelpInfo.h"

void ProtectedEntityWaitingForHelpInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ProtectedEntityWaitingForHelpInfo(input);
}

void ProtectedEntityWaitingForHelpInfo::deserializeAs_ProtectedEntityWaitingForHelpInfo(ICustomDataInput &input) {
    this->_timeLeftBeforeFightFunc(input);
    this->_waitTimeForPlacementFunc(input);
    this->_nbPositionForDefensorsFunc(input);
}

void ProtectedEntityWaitingForHelpInfo::_timeLeftBeforeFightFunc(ICustomDataInput &input) {
    this->timeLeftBeforeFight = input.readInt();
}

void ProtectedEntityWaitingForHelpInfo::_waitTimeForPlacementFunc(ICustomDataInput &input) {
    this->waitTimeForPlacement = input.readInt();
}

void ProtectedEntityWaitingForHelpInfo::_nbPositionForDefensorsFunc(ICustomDataInput &input) {
    this->nbPositionForDefensors = input.readByte();

}

