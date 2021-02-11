#include "TeleportRequestMessage.h"

void TeleportRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportRequestMessage(input);
}

void TeleportRequestMessage::deserializeAs_TeleportRequestMessage(ICustomDataInput &input) {
    this->_sourceTypeFunc(input);
    this->_destinationTypeFunc(input);
    this->_mapIdFunc(input);
}

void TeleportRequestMessage::_sourceTypeFunc(ICustomDataInput &input) {
    this->sourceType = input.readByte();

}

void TeleportRequestMessage::_destinationTypeFunc(ICustomDataInput &input) {
    this->destinationType = input.readByte();

}

void TeleportRequestMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

