#include "ObjectUseOnCellMessage.h"

void ObjectUseOnCellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectUseOnCellMessage(input);
}

void ObjectUseOnCellMessage::deserializeAs_ObjectUseOnCellMessage(ICustomDataInput &input) {
    ObjectUseMessage::deserialize(input);
    this->_cellsFunc(input);
}

void ObjectUseOnCellMessage::_cellsFunc(ICustomDataInput &input) {
    this->cells = input.readVarUhShort();

}

