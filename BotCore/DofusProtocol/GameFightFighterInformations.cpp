#include "../ProtocolTypeManager.h"
#include "GameFightFighterInformations.h"

void GameFightFighterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterInformations(input);
}

void GameFightFighterInformations::deserializeAs_GameFightFighterInformations(ICustomDataInput &input) {
    unsigned int _val4 = 0;
    GameContextActorInformations::deserialize(input);
    this->spawnInfo.deserialize(input);
    this->_waveFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->stats = ProtocolTypeManager::getObject<GameFightMinimalStats>(input, _id3);
    unsigned int _previousPositionsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _previousPositionsLen; _i4++) {
        _val4 = input.readVarUhShort();

        this->previousPositions.push_back(_val4);
    }
}

void GameFightFighterInformations::_waveFunc(ICustomDataInput &input) {
    this->wave = input.readByte();

}

void GameFightFighterInformations::_previousPositionsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->previousPositions.push_back(_val);
}

