#include "../ProtocolTypeManager.h"
#include "AllianceFactsMessage.h"

void AllianceFactsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceFactsMessage(input);
}

void AllianceFactsMessage::deserializeAs_AllianceFactsMessage(ICustomDataInput &input) {
    GuildInAllianceInformations _item2;
    unsigned int _val3 = 0;
    unsigned int _id1 = input.readUnsignedShort();
    this->infos = ProtocolTypeManager::getObject<AllianceFactSheetInformations>(input, _id1);
    unsigned int _guildsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _guildsLen; _i2++) {
        _item2.deserialize(input);
        this->guilds.push_back(_item2);
    }
    unsigned int _controlledSubareaIdsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _controlledSubareaIdsLen; _i3++) {
        _val3 = input.readVarUhShort();

        this->controlledSubareaIds.push_back(_val3);
    }
    this->_leaderCharacterIdFunc(input);
    this->_leaderCharacterNameFunc(input);
}

void AllianceFactsMessage::_guildsFunc(ICustomDataInput &input) {
    GuildInAllianceInformations _item;
    _item.deserialize(input);
    this->guilds.push_back(_item);
}

void AllianceFactsMessage::_controlledSubareaIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->controlledSubareaIds.push_back(_val);
}

void AllianceFactsMessage::_leaderCharacterIdFunc(ICustomDataInput &input) {
    this->leaderCharacterId = input.readVarUhLong();

}

void AllianceFactsMessage::_leaderCharacterNameFunc(ICustomDataInput &input) {
    this->leaderCharacterName = input.readUTF();
}

