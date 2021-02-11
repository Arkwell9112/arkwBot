#include "NpcDialogCreationMessage.h"

void NpcDialogCreationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NpcDialogCreationMessage(input);
}

void NpcDialogCreationMessage::deserializeAs_NpcDialogCreationMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
    this->_npcIdFunc(input);
}

void NpcDialogCreationMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void NpcDialogCreationMessage::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readInt();
}

