#include "TaxCollectorAttackedResultMessage.h"

void TaxCollectorAttackedResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorAttackedResultMessage(input);
}

void TaxCollectorAttackedResultMessage::deserializeAs_TaxCollectorAttackedResultMessage(ICustomDataInput &input) {
    this->_deadOrAliveFunc(input);
    this->basicInfos.deserialize(input);
    this->guild.deserialize(input);
}

void TaxCollectorAttackedResultMessage::_deadOrAliveFunc(ICustomDataInput &input) {
    this->deadOrAlive = input.readBoolean();
}

