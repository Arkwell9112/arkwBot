#include "DungeonPartyFinderListenRequestMessage.h"

void DungeonPartyFinderListenRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderListenRequestMessage(input);
}

void
DungeonPartyFinderListenRequestMessage::deserializeAs_DungeonPartyFinderListenRequestMessage(ICustomDataInput &input) {
    this->_dungeonIdFunc(input);
}

void DungeonPartyFinderListenRequestMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

