#include "../ProtocolTypeManager.h"
#include "TaxCollectorFightersInformation.h"

void TaxCollectorFightersInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorFightersInformation(input);
}

void TaxCollectorFightersInformation::deserializeAs_TaxCollectorFightersInformation(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    CharacterMinimalPlusLookInformations _item2;
    unsigned int _id3 = 0;
    CharacterMinimalPlusLookInformations _item3;
    this->_collectorIdFunc(input);
    unsigned int _allyCharactersInformationsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _allyCharactersInformationsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id2);
        this->allyCharactersInformations.push_back(_item2);
    }
    unsigned int _enemyCharactersInformationsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _enemyCharactersInformationsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id3);
        this->enemyCharactersInformations.push_back(_item3);
    }
}

void TaxCollectorFightersInformation::_collectorIdFunc(ICustomDataInput &input) {
    this->collectorId = input.readDouble();

}

void TaxCollectorFightersInformation::_allyCharactersInformationsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    CharacterMinimalPlusLookInformations _item = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(
            input, _id);
    _item.deserialize(input);
    this->allyCharactersInformations.push_back(_item);
}

void TaxCollectorFightersInformation::_enemyCharactersInformationsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    CharacterMinimalPlusLookInformations _item = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(
            input, _id);
    _item.deserialize(input);
    this->enemyCharactersInformations.push_back(_item);
}

