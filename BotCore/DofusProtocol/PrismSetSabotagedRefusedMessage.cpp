#include "PrismSetSabotagedRefusedMessage.h"

void PrismSetSabotagedRefusedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismSetSabotagedRefusedMessage(input);
}

void PrismSetSabotagedRefusedMessage::deserializeAs_PrismSetSabotagedRefusedMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_reasonFunc(input);
}

void PrismSetSabotagedRefusedMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismSetSabotagedRefusedMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();
}

