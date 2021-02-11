#include "../IO/BooleanByteWrapper.h"
#include "../ProtocolTypeManager.h"
#include "GameRolePlayGroupMonsterInformations.h"

void GameRolePlayGroupMonsterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayGroupMonsterInformations(input);
}

void GameRolePlayGroupMonsterInformations::deserializeAs_GameRolePlayGroupMonsterInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->staticInfos = ProtocolTypeManager::getObject<GroupMonsterStaticInformations>(input, _id1);
    this->_lootShareFunc(input);
    this->_alignmentSideFunc(input);
}

void GameRolePlayGroupMonsterInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->keyRingBonus = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasHardcoreDrop = BooleanByteWrapper::getFlag(_box0, 1);
    this->hasAVARewardToken = BooleanByteWrapper::getFlag(_box0, 2);
}

void GameRolePlayGroupMonsterInformations::_lootShareFunc(ICustomDataInput &input) {
    this->lootShare = input.readByte();

}

void GameRolePlayGroupMonsterInformations::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

