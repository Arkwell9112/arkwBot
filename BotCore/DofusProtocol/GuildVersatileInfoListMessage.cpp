#include "../ProtocolTypeManager.h"
#include "GuildVersatileInfoListMessage.h"

void GuildVersatileInfoListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildVersatileInfoListMessage(input);
}

void GuildVersatileInfoListMessage::deserializeAs_GuildVersatileInfoListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    GuildVersatileInformations _item1;
    unsigned int _guildsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _guildsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<GuildVersatileInformations>(input, _id1);
        this->guilds.push_back(_item1);
    }
}

void GuildVersatileInfoListMessage::_guildsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GuildVersatileInformations _item = ProtocolTypeManager::getObject<GuildVersatileInformations>(input, _id);
    _item.deserialize(input);
    this->guilds.push_back(_item);
}

