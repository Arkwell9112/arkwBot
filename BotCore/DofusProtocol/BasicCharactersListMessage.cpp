#include "../ProtocolTypeManager.h"
#include "BasicCharactersListMessage.h"

void BasicCharactersListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicCharactersListMessage(input);
}

void BasicCharactersListMessage::deserializeAs_BasicCharactersListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    CharacterBaseInformations _item1;
    unsigned int _charactersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<CharacterBaseInformations>(input, _id1);
        this->characters.push_back(_item1);
    }
}

void BasicCharactersListMessage::_charactersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    CharacterBaseInformations _item = ProtocolTypeManager::getObject<CharacterBaseInformations>(input, _id);
    _item.deserialize(input);
    this->characters.push_back(_item);
}

