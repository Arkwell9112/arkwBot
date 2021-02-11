#include "GameFightResumeSlaveInfo.h"

void GameFightResumeSlaveInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightResumeSlaveInfo(input);
}

void GameFightResumeSlaveInfo::deserializeAs_GameFightResumeSlaveInfo(ICustomDataInput &input) {
    GameFightSpellCooldown _item2;
    this->_slaveIdFunc(input);
    unsigned int _spellCooldownsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellCooldownsLen; _i2++) {
        _item2.deserialize(input);
        this->spellCooldowns.push_back(_item2);
    }
    this->_summonCountFunc(input);
    this->_bombCountFunc(input);
}

void GameFightResumeSlaveInfo::_slaveIdFunc(ICustomDataInput &input) {
    this->slaveId = input.readDouble();

}

void GameFightResumeSlaveInfo::_spellCooldownsFunc(ICustomDataInput &input) {
    GameFightSpellCooldown _item;
    _item.deserialize(input);
    this->spellCooldowns.push_back(_item);
}

void GameFightResumeSlaveInfo::_summonCountFunc(ICustomDataInput &input) {
    this->summonCount = input.readByte();

}

void GameFightResumeSlaveInfo::_bombCountFunc(ICustomDataInput &input) {
    this->bombCount = input.readByte();

}

