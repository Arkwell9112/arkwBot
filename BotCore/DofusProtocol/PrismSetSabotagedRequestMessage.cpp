#include "PrismSetSabotagedRequestMessage.h"

void PrismSetSabotagedRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismSetSabotagedRequestMessage(input);
}

void PrismSetSabotagedRequestMessage::deserializeAs_PrismSetSabotagedRequestMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
}

void PrismSetSabotagedRequestMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

