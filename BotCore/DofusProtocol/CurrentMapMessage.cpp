#include "CurrentMapMessage.h"

void CurrentMapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CurrentMapMessage(input);
}

void CurrentMapMessage::deserializeAs_CurrentMapMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
    this->_mapKeyFunc(input);
}

void CurrentMapMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void CurrentMapMessage::_mapKeyFunc(ICustomDataInput &input) {
    this->mapKey = input.readUTF();
}

