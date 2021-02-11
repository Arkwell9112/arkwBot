#include "GameActionFightSpellCastMessage.h"

void GameActionFightSpellCastMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightSpellCastMessage(input);
}

void GameActionFightSpellCastMessage::deserializeAs_GameActionFightSpellCastMessage(ICustomDataInput &input) {
    int _val3 = 0;
    AbstractGameActionFightTargetedAbilityMessage::deserialize(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
    unsigned int _portalsIdsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _portalsIdsLen; _i3++) {
        _val3 = input.readShort();
        this->portalsIds.push_back(_val3);
    }
}

void GameActionFightSpellCastMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void GameActionFightSpellCastMessage::_spellLevelFunc(ICustomDataInput &input) {
    this->spellLevel = input.readShort();

}

void GameActionFightSpellCastMessage::_portalsIdsFunc(ICustomDataInput &input) {
    int _val = input.readShort();
    this->portalsIds.push_back(_val);
}

