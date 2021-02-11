#include "../ProtocolTypeManager.h"
#include "GameRolePlayGroupMonsterWaveInformations.h"

void GameRolePlayGroupMonsterWaveInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayGroupMonsterWaveInformations(input);
}

void GameRolePlayGroupMonsterWaveInformations::deserializeAs_GameRolePlayGroupMonsterWaveInformations(
        ICustomDataInput &input) {
    unsigned int _id2 = 0;
    GroupMonsterStaticInformations _item2;
    GameRolePlayGroupMonsterInformations::deserialize(input);
    this->_nbWavesFunc(input);
    unsigned int _alternativesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _alternativesLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<GroupMonsterStaticInformations>(input, _id2);
        this->alternatives.push_back(_item2);
    }
}

void GameRolePlayGroupMonsterWaveInformations::_nbWavesFunc(ICustomDataInput &input) {
    this->nbWaves = input.readByte();

}

void GameRolePlayGroupMonsterWaveInformations::_alternativesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GroupMonsterStaticInformations _item = ProtocolTypeManager::getObject<GroupMonsterStaticInformations>(input, _id);
    _item.deserialize(input);
    this->alternatives.push_back(_item);
}

