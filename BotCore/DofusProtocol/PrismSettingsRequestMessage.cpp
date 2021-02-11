#include "PrismSettingsRequestMessage.h"

void PrismSettingsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismSettingsRequestMessage(input);
}

void PrismSettingsRequestMessage::deserializeAs_PrismSettingsRequestMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_startDefenseTimeFunc(input);
}

void PrismSettingsRequestMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismSettingsRequestMessage::_startDefenseTimeFunc(ICustomDataInput &input) {
    this->startDefenseTime = input.readByte();

}

