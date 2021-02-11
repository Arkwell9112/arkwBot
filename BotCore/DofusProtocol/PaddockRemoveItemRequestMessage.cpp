#include "PaddockRemoveItemRequestMessage.h"

void PaddockRemoveItemRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockRemoveItemRequestMessage(input);
}

void PaddockRemoveItemRequestMessage::deserializeAs_PaddockRemoveItemRequestMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void PaddockRemoveItemRequestMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

