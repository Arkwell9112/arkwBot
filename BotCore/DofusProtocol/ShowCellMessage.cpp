#include "ShowCellMessage.h"

void ShowCellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShowCellMessage(input);
}

void ShowCellMessage::deserializeAs_ShowCellMessage(ICustomDataInput &input) {
    this->_sourceIdFunc(input);
    this->_cellIdFunc(input);
}

void ShowCellMessage::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readDouble();

}

void ShowCellMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

