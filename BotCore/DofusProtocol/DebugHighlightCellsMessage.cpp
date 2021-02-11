#include "DebugHighlightCellsMessage.h"

void DebugHighlightCellsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DebugHighlightCellsMessage(input);
}

void DebugHighlightCellsMessage::deserializeAs_DebugHighlightCellsMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_colorFunc(input);
    unsigned int _cellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _cellsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->cells.push_back(_val2);
    }
}

void DebugHighlightCellsMessage::_colorFunc(ICustomDataInput &input) {
    this->color = input.readDouble();

}

void DebugHighlightCellsMessage::_cellsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->cells.push_back(_val);
}

