#include "PrismFightRemovedMessage.h"

void PrismFightRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightRemovedMessage(input);
}

void PrismFightRemovedMessage::deserializeAs_PrismFightRemovedMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
}

void PrismFightRemovedMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

