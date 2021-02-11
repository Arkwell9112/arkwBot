#include "GuildListMessage.h"

void GuildListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildListMessage(input);
}

void GuildListMessage::deserializeAs_GuildListMessage(ICustomDataInput &input) {
    GuildInformations _item1;
    unsigned int _guildsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _guildsLen; _i1++) {
        _item1.deserialize(input);
        this->guilds.push_back(_item1);
    }
}

void GuildListMessage::_guildsFunc(ICustomDataInput &input) {
    GuildInformations _item;
    _item.deserialize(input);
    this->guilds.push_back(_item);
}

