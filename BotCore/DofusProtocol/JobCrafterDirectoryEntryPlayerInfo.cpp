#include "../ProtocolTypeManager.h"
#include "JobCrafterDirectoryEntryPlayerInfo.h"

void JobCrafterDirectoryEntryPlayerInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryEntryPlayerInfo(input);
}

void JobCrafterDirectoryEntryPlayerInfo::deserializeAs_JobCrafterDirectoryEntryPlayerInfo(ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_alignmentSideFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_isInWorkshopFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_canCraftLegendaryFunc(input);
    unsigned int _id12 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id12);
}

void JobCrafterDirectoryEntryPlayerInfo::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void JobCrafterDirectoryEntryPlayerInfo::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void JobCrafterDirectoryEntryPlayerInfo::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void JobCrafterDirectoryEntryPlayerInfo::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void JobCrafterDirectoryEntryPlayerInfo::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void JobCrafterDirectoryEntryPlayerInfo::_isInWorkshopFunc(ICustomDataInput &input) {
    this->isInWorkshop = input.readBoolean();
}

void JobCrafterDirectoryEntryPlayerInfo::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void JobCrafterDirectoryEntryPlayerInfo::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void JobCrafterDirectoryEntryPlayerInfo::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void JobCrafterDirectoryEntryPlayerInfo::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void JobCrafterDirectoryEntryPlayerInfo::_canCraftLegendaryFunc(ICustomDataInput &input) {
    this->canCraftLegendary = input.readBoolean();
}

