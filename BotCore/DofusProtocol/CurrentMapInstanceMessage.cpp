#include "CurrentMapInstanceMessage.h"

void CurrentMapInstanceMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CurrentMapInstanceMessage(input);
}

void CurrentMapInstanceMessage::deserializeAs_CurrentMapInstanceMessage(ICustomDataInput &input) {
    CurrentMapMessage::deserialize(input);
    this->_instantiatedMapIdFunc(input);
}

void CurrentMapInstanceMessage::_instantiatedMapIdFunc(ICustomDataInput &input) {
    this->instantiatedMapId = input.readDouble();

}

