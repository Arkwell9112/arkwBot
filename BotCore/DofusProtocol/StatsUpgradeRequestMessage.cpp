#include "StatsUpgradeRequestMessage.h"

void StatsUpgradeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatsUpgradeRequestMessage(input);
}

void StatsUpgradeRequestMessage::deserializeAs_StatsUpgradeRequestMessage(ICustomDataInput &input) {
    this->_useAdditionnalFunc(input);
    this->_statIdFunc(input);
    this->_boostPointFunc(input);
}

void StatsUpgradeRequestMessage::_useAdditionnalFunc(ICustomDataInput &input) {
    this->useAdditionnal = input.readBoolean();
}

void StatsUpgradeRequestMessage::_statIdFunc(ICustomDataInput &input) {
    this->statId = input.readByte();

}

void StatsUpgradeRequestMessage::_boostPointFunc(ICustomDataInput &input) {
    this->boostPoint = input.readVarUhShort();

}

