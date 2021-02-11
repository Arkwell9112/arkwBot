#include "GameFightResumeMessage.h"

void GameFightResumeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightResumeMessage(input);
}

void GameFightResumeMessage::deserializeAs_GameFightResumeMessage(ICustomDataInput &input) {
    GameFightSpellCooldown _item1;
    GameFightSpectateMessage::deserialize(input);
    unsigned int _spellCooldownsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _spellCooldownsLen; _i1++) {
        _item1.deserialize(input);
        this->spellCooldowns.push_back(_item1);
    }
    this->_summonCountFunc(input);
    this->_bombCountFunc(input);
}

void GameFightResumeMessage::_spellCooldownsFunc(ICustomDataInput &input) {
    GameFightSpellCooldown _item;
    _item.deserialize(input);
    this->spellCooldowns.push_back(_item);
}

void GameFightResumeMessage::_summonCountFunc(ICustomDataInput &input) {
    this->summonCount = input.readByte();

}

void GameFightResumeMessage::_bombCountFunc(ICustomDataInput &input) {
    this->bombCount = input.readByte();

}

