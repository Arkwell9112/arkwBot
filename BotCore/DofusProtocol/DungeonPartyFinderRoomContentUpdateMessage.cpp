#include "DungeonPartyFinderRoomContentUpdateMessage.h"

void DungeonPartyFinderRoomContentUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderRoomContentUpdateMessage(input);
}

void DungeonPartyFinderRoomContentUpdateMessage::deserializeAs_DungeonPartyFinderRoomContentUpdateMessage(
        ICustomDataInput &input) {
    DungeonPartyFinderPlayer _item2;
    double _val3 = 0;
    this->_dungeonIdFunc(input);
    unsigned int _addedPlayersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _addedPlayersLen; _i2++) {
        _item2.deserialize(input);
        this->addedPlayers.push_back(_item2);
    }
    unsigned int _removedPlayersIdsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _removedPlayersIdsLen; _i3++) {
        _val3 = input.readVarUhLong();

        this->removedPlayersIds.push_back(_val3);
    }
}

void DungeonPartyFinderRoomContentUpdateMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void DungeonPartyFinderRoomContentUpdateMessage::_addedPlayersFunc(ICustomDataInput &input) {
    DungeonPartyFinderPlayer _item;
    _item.deserialize(input);
    this->addedPlayers.push_back(_item);
}

void DungeonPartyFinderRoomContentUpdateMessage::_removedPlayersIdsFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->removedPlayersIds.push_back(_val);
}

