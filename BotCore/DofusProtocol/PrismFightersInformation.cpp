#include "../ProtocolTypeManager.h"
#include "PrismFightersInformation.h"

void PrismFightersInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightersInformation(input);
}

void PrismFightersInformation::deserializeAs_PrismFightersInformation(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    CharacterMinimalPlusLookInformations _item3;
    unsigned int _id4 = 0;
    CharacterMinimalPlusLookInformations _item4;
    this->_subAreaIdFunc(input);
    this->waitingForHelpInfo.deserialize(input);
    unsigned int _allyCharactersInformationsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _allyCharactersInformationsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id3);
        this->allyCharactersInformations.push_back(_item3);
    }
    unsigned int _enemyCharactersInformationsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _enemyCharactersInformationsLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id4);
        this->enemyCharactersInformations.push_back(_item4);
    }
}

void PrismFightersInformation::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightersInformation::_allyCharactersInformationsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    CharacterMinimalPlusLookInformations _item = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(
            input, _id);
    _item.deserialize(input);
    this->allyCharactersInformations.push_back(_item);
}

void PrismFightersInformation::_enemyCharactersInformationsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    CharacterMinimalPlusLookInformations _item = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(
            input, _id);
    _item.deserialize(input);
    this->enemyCharactersInformations.push_back(_item);
}

