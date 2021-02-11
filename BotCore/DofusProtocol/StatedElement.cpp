#include "StatedElement.h"

void StatedElement::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatedElement(input);
}

void StatedElement::deserializeAs_StatedElement(ICustomDataInput &input) {
    this->_elementIdFunc(input);
    this->_elementCellIdFunc(input);
    this->_elementStateFunc(input);
    this->_onCurrentMapFunc(input);
}

void StatedElement::_elementIdFunc(ICustomDataInput &input) {
    this->elementId = input.readInt();

}

void StatedElement::_elementCellIdFunc(ICustomDataInput &input) {
    this->elementCellId = input.readVarUhShort();

}

void StatedElement::_elementStateFunc(ICustomDataInput &input) {
    this->elementState = input.readVarUhInt();

}

void StatedElement::_onCurrentMapFunc(ICustomDataInput &input) {
    this->onCurrentMap = input.readBoolean();
}

