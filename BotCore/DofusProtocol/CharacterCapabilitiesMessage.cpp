#include "CharacterCapabilitiesMessage.h"

void CharacterCapabilitiesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCapabilitiesMessage(input);
}

void CharacterCapabilitiesMessage::deserializeAs_CharacterCapabilitiesMessage(ICustomDataInput &input) {
    this->_guildEmblemSymbolCategoriesFunc(input);
}

void CharacterCapabilitiesMessage::_guildEmblemSymbolCategoriesFunc(ICustomDataInput &input) {
    this->guildEmblemSymbolCategories = input.readVarUhInt();

}

