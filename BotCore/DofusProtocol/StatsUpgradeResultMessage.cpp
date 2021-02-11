#include "StatsUpgradeResultMessage.h"

void StatsUpgradeResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatsUpgradeResultMessage(input);
}

void StatsUpgradeResultMessage::deserializeAs_StatsUpgradeResultMessage(ICustomDataInput &input) {
    this->_resultFunc(input);
    this->_nbCharacBoostFunc(input);
}

void StatsUpgradeResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();
}

void StatsUpgradeResultMessage::_nbCharacBoostFunc(ICustomDataInput &input) {
    this->nbCharacBoost = input.readVarUhShort();

}

