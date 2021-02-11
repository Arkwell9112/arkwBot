#include "ShowCellRequestMessage.h"

void ShowCellRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShowCellRequestMessage(input);
}

void ShowCellRequestMessage::deserializeAs_ShowCellRequestMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void ShowCellRequestMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

