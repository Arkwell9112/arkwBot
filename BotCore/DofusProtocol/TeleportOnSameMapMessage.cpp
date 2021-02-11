#include "TeleportOnSameMapMessage.h"

void TeleportOnSameMapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportOnSameMapMessage(input);
}

void TeleportOnSameMapMessage::deserializeAs_TeleportOnSameMapMessage(ICustomDataInput &input) {
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void TeleportOnSameMapMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void TeleportOnSameMapMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

