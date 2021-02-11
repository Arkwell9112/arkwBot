#include "CharactersListWithRemodelingMessage.h"

void CharactersListWithRemodelingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharactersListWithRemodelingMessage(input);
}

void CharactersListWithRemodelingMessage::deserializeAs_CharactersListWithRemodelingMessage(ICustomDataInput &input) {
    CharacterToRemodelInformations _item1;
    CharactersListMessage::deserialize(input);
    unsigned int _charactersToRemodelLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersToRemodelLen; _i1++) {
        _item1.deserialize(input);
        this->charactersToRemodel.push_back(_item1);
    }
}

void CharactersListWithRemodelingMessage::_charactersToRemodelFunc(ICustomDataInput &input) {
    CharacterToRemodelInformations _item;
    _item.deserialize(input);
    this->charactersToRemodel.push_back(_item);
}

