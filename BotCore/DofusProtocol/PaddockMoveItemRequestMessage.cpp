#include "PaddockMoveItemRequestMessage.h"

void PaddockMoveItemRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockMoveItemRequestMessage(input);
}

void PaddockMoveItemRequestMessage::deserializeAs_PaddockMoveItemRequestMessage(ICustomDataInput &input) {
    this->_oldCellIdFunc(input);
    this->_newCellIdFunc(input);
}

void PaddockMoveItemRequestMessage::_oldCellIdFunc(ICustomDataInput &input) {
    this->oldCellId = input.readVarUhShort();

}

void PaddockMoveItemRequestMessage::_newCellIdFunc(ICustomDataInput &input) {
    this->newCellId = input.readVarUhShort();

}

