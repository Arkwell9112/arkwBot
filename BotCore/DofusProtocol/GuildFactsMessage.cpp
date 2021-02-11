#include "../ProtocolTypeManager.h"
#include "GuildFactsMessage.h"

void GuildFactsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFactsMessage(input);
}

void GuildFactsMessage::deserializeAs_GuildFactsMessage(ICustomDataInput &input) {
    CharacterMinimalGuildPublicInformations _item4;
    unsigned int _id1 = input.readUnsignedShort();
    this->infos = ProtocolTypeManager::getObject<GuildFactSheetInformations>(input, _id1);
    this->_creationDateFunc(input);
    this->_nbTaxCollectorsFunc(input);
    unsigned int _membersLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _membersLen; _i4++) {
        _item4.deserialize(input);
        this->members.push_back(_item4);
    }
}

void GuildFactsMessage::_creationDateFunc(ICustomDataInput &input) {
    this->creationDate = input.readInt();

}

void GuildFactsMessage::_nbTaxCollectorsFunc(ICustomDataInput &input) {
    this->nbTaxCollectors = input.readVarUhShort();

}

void GuildFactsMessage::_membersFunc(ICustomDataInput &input) {
    CharacterMinimalGuildPublicInformations _item;
    _item.deserialize(input);
    this->members.push_back(_item);
}

