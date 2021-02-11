#include "../ProtocolTypeManager.h"
#include "AllianceInsiderInfoMessage.h"

void AllianceInsiderInfoMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInsiderInfoMessage(input);
}

void AllianceInsiderInfoMessage::deserializeAs_AllianceInsiderInfoMessage(ICustomDataInput &input) {
    GuildInsiderFactSheetInformations _item2;
    unsigned int _id3 = 0;
    PrismSubareaEmptyInfo _item3;
    this->allianceInfos.deserialize(input);
    unsigned int _guildsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _guildsLen; _i2++) {
        _item2.deserialize(input);
        this->guilds.push_back(_item2);
    }
    unsigned int _prismsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _prismsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<PrismSubareaEmptyInfo>(input, _id3);
        this->prisms.push_back(_item3);
    }
}

void AllianceInsiderInfoMessage::_guildsFunc(ICustomDataInput &input) {
    GuildInsiderFactSheetInformations _item;
    _item.deserialize(input);
    this->guilds.push_back(_item);
}

void AllianceInsiderInfoMessage::_prismsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PrismSubareaEmptyInfo _item = ProtocolTypeManager::getObject<PrismSubareaEmptyInfo>(input, _id);
    _item.deserialize(input);
    this->prisms.push_back(_item);
}

