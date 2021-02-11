#include "GuildInfosUpgradeMessage.h"

void GuildInfosUpgradeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInfosUpgradeMessage(input);
}

void GuildInfosUpgradeMessage::deserializeAs_GuildInfosUpgradeMessage(ICustomDataInput &input) {
    unsigned int _val9 = 0;
    int _val10 = 0;
    this->_maxTaxCollectorsCountFunc(input);
    this->_taxCollectorsCountFunc(input);
    this->_taxCollectorLifePointsFunc(input);
    this->_taxCollectorDamagesBonusesFunc(input);
    this->_taxCollectorPodsFunc(input);
    this->_taxCollectorProspectingFunc(input);
    this->_taxCollectorWisdomFunc(input);
    this->_boostPointsFunc(input);
    unsigned int _spellIdLen = input.readUnsignedShort();
    for (unsigned int _i9 = 0; _i9 < _spellIdLen; _i9++) {
        _val9 = input.readVarUhShort();

        this->spellId.push_back(_val9);
    }
    unsigned int _spellLevelLen = input.readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _spellLevelLen; _i10++) {
        _val10 = input.readShort();
        this->spellLevel.push_back(_val10);
    }
}

void GuildInfosUpgradeMessage::_maxTaxCollectorsCountFunc(ICustomDataInput &input) {
    this->maxTaxCollectorsCount = input.readByte();

}

void GuildInfosUpgradeMessage::_taxCollectorsCountFunc(ICustomDataInput &input) {
    this->taxCollectorsCount = input.readByte();

}

void GuildInfosUpgradeMessage::_taxCollectorLifePointsFunc(ICustomDataInput &input) {
    this->taxCollectorLifePoints = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_taxCollectorDamagesBonusesFunc(ICustomDataInput &input) {
    this->taxCollectorDamagesBonuses = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_taxCollectorPodsFunc(ICustomDataInput &input) {
    this->taxCollectorPods = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_taxCollectorProspectingFunc(ICustomDataInput &input) {
    this->taxCollectorProspecting = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_taxCollectorWisdomFunc(ICustomDataInput &input) {
    this->taxCollectorWisdom = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_boostPointsFunc(ICustomDataInput &input) {
    this->boostPoints = input.readVarUhShort();

}

void GuildInfosUpgradeMessage::_spellIdFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->spellId.push_back(_val);
}

void GuildInfosUpgradeMessage::_spellLevelFunc(ICustomDataInput &input) {
    int _val = input.readShort();
    this->spellLevel.push_back(_val);
}

