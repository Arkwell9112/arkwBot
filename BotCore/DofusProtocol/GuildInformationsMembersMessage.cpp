#include "GuildInformationsMembersMessage.h"

void GuildInformationsMembersMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInformationsMembersMessage(input);
}

void GuildInformationsMembersMessage::deserializeAs_GuildInformationsMembersMessage(ICustomDataInput &input) {
    GuildMember _item1;
    unsigned int _membersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _membersLen; _i1++) {
        _item1.deserialize(input);
        this->members.push_back(_item1);
    }
}

void GuildInformationsMembersMessage::_membersFunc(ICustomDataInput &input) {
    GuildMember _item;
    _item.deserialize(input);
    this->members.push_back(_item);
}

