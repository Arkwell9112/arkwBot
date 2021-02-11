#include "NpcGenericActionRequestMessage.h"

void NpcGenericActionRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NpcGenericActionRequestMessage(input);
}

void NpcGenericActionRequestMessage::deserializeAs_NpcGenericActionRequestMessage(ICustomDataInput &input) {
    this->_npcIdFunc(input);
    this->_npcActionIdFunc(input);
    this->_npcMapIdFunc(input);
}

void NpcGenericActionRequestMessage::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readInt();
}

void NpcGenericActionRequestMessage::_npcActionIdFunc(ICustomDataInput &input) {
    this->npcActionId = input.readByte();

}

void NpcGenericActionRequestMessage::_npcMapIdFunc(ICustomDataInput &input) {
    this->npcMapId = input.readDouble();

}

