#include "DungeonKeyRingUpdateMessage.h"

void DungeonKeyRingUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonKeyRingUpdateMessage(input);
}

void DungeonKeyRingUpdateMessage::deserializeAs_DungeonKeyRingUpdateMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
    this->_availableFunc(input);
}

void DungeonKeyRingUpdateMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void DungeonKeyRingUpdateMessage::_availableFunc(ICustomDataInput &input) {
    this->available = input.readBoolean();
}

