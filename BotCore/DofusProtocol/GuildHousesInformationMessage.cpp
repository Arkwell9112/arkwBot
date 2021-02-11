#include "GuildHousesInformationMessage.h"

void GuildHousesInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildHousesInformationMessage(input);
}

void GuildHousesInformationMessage::deserializeAs_GuildHousesInformationMessage(ICustomDataInput &input) {
    HouseInformationsForGuild _item1;
    unsigned int _housesInformationsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _housesInformationsLen; _i1++) {
        _item1.deserialize(input);
        this->housesInformations.push_back(_item1);
    }
}

void GuildHousesInformationMessage::_housesInformationsFunc(ICustomDataInput &input) {
    HouseInformationsForGuild _item;
    _item.deserialize(input);
    this->housesInformations.push_back(_item);
}

