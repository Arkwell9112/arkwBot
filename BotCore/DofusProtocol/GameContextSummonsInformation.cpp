#include "../ProtocolTypeManager.h"
#include "GameContextSummonsInformation.h"

void GameContextSummonsInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextSummonsInformation(input);
}

void GameContextSummonsInformation::deserializeAs_GameContextSummonsInformation(ICustomDataInput &input) {
    unsigned int _id5 = 0;
    GameContextBasicSpawnInformation _item5;
    unsigned int _id1 = input.readUnsignedShort();
    this->spawnInformation = ProtocolTypeManager::getObject<SpawnInformation>(input, _id1);
    this->_waveFunc(input);
    this->look.deserialize(input);
    unsigned int _id4 = input.readUnsignedShort();
    this->stats = ProtocolTypeManager::getObject<GameFightMinimalStats>(input, _id4);
    unsigned int _summonsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _summonsLen; _i5++) {
        _id5 = input.readUnsignedShort();
        _item5 = ProtocolTypeManager::getObject<GameContextBasicSpawnInformation>(input, _id5);
        this->summons.push_back(_item5);
    }
}

void GameContextSummonsInformation::_waveFunc(ICustomDataInput &input) {
    this->wave = input.readByte();

}

void GameContextSummonsInformation::_summonsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameContextBasicSpawnInformation _item = ProtocolTypeManager::getObject<GameContextBasicSpawnInformation>(input,
                                                                                                              _id);
    _item.deserialize(input);
    this->summons.push_back(_item);
}

