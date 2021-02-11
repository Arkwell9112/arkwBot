#include "DungeonPartyFinderRoomContentMessage.h"

void DungeonPartyFinderRoomContentMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderRoomContentMessage(input);
}

void DungeonPartyFinderRoomContentMessage::deserializeAs_DungeonPartyFinderRoomContentMessage(ICustomDataInput &input) {
    DungeonPartyFinderPlayer _item2;
    this->_dungeonIdFunc(input);
    unsigned int _playersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playersLen; _i2++) {
        _item2.deserialize(input);
        this->players.push_back(_item2);
    }
}

void DungeonPartyFinderRoomContentMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void DungeonPartyFinderRoomContentMessage::_playersFunc(ICustomDataInput &input) {
    DungeonPartyFinderPlayer _item;
    _item.deserialize(input);
    this->players.push_back(_item);
}

