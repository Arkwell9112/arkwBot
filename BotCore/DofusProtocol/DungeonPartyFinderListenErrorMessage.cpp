#include "DungeonPartyFinderListenErrorMessage.h"

void DungeonPartyFinderListenErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderListenErrorMessage(input);
}

void DungeonPartyFinderListenErrorMessage::deserializeAs_DungeonPartyFinderListenErrorMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
}

void DungeonPartyFinderListenErrorMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

