#include "../ProtocolTypeManager.h"
#include "MapComplementaryInformationsDataMessage.h"

void MapComplementaryInformationsDataMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsDataMessage(input);
}

void MapComplementaryInformationsDataMessage::deserializeAs_MapComplementaryInformationsDataMessage(
        ICustomDataInput &input) {
    unsigned int _id3 = 0;
    HouseInformations _item3;
    unsigned int _id4 = 0;
    GameRolePlayActorInformations _item4;
    unsigned int _id5 = 0;
    InteractiveElement _item5;
    StatedElement _item6;
    MapObstacle _item7;
    FightCommonInformations _item8;
    this->_subAreaIdFunc(input);
    this->_mapIdFunc(input);
    unsigned int _housesLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _housesLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<HouseInformations>(input, _id3);
        this->houses.push_back(_item3);
    }
    unsigned int _actorsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _actorsLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<GameRolePlayActorInformations>(input, _id4);
        this->actors.push_back(_item4);
    }
    unsigned int _interactiveElementsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _interactiveElementsLen; _i5++) {
        _id5 = input.readUnsignedShort();
        _item5 = ProtocolTypeManager::getObject<InteractiveElement>(input, _id5);
        this->interactiveElements.push_back(_item5);
    }
    unsigned int _statedElementsLen = input.readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _statedElementsLen; _i6++) {
        _item6.deserialize(input);
        this->statedElements.push_back(_item6);
    }
    unsigned int _obstaclesLen = input.readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _obstaclesLen; _i7++) {
        _item7.deserialize(input);
        this->obstacles.push_back(_item7);
    }
    unsigned int _fightsLen = input.readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _fightsLen; _i8++) {
        _item8.deserialize(input);
        this->fights.push_back(_item8);
    }
    this->_hasAggressiveMonstersFunc(input);
    this->fightStartPositions.deserialize(input);
}

void MapComplementaryInformationsDataMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void MapComplementaryInformationsDataMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void MapComplementaryInformationsDataMessage::_housesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    HouseInformations _item = ProtocolTypeManager::getObject<HouseInformations>(input, _id);
    _item.deserialize(input);
    this->houses.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_actorsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameRolePlayActorInformations _item = ProtocolTypeManager::getObject<GameRolePlayActorInformations>(input, _id);
    _item.deserialize(input);
    this->actors.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_interactiveElementsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    InteractiveElement _item = ProtocolTypeManager::getObject<InteractiveElement>(input, _id);
    _item.deserialize(input);
    this->interactiveElements.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_statedElementsFunc(ICustomDataInput &input) {
    StatedElement _item;
    _item.deserialize(input);
    this->statedElements.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_obstaclesFunc(ICustomDataInput &input) {
    MapObstacle _item;
    _item.deserialize(input);
    this->obstacles.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_fightsFunc(ICustomDataInput &input) {
    FightCommonInformations _item;
    _item.deserialize(input);
    this->fights.push_back(_item);
}

void MapComplementaryInformationsDataMessage::_hasAggressiveMonstersFunc(ICustomDataInput &input) {
    this->hasAggressiveMonsters = input.readBoolean();
}

