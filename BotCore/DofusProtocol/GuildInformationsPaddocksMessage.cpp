#include "GuildInformationsPaddocksMessage.h"

void GuildInformationsPaddocksMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInformationsPaddocksMessage(input);
}

void GuildInformationsPaddocksMessage::deserializeAs_GuildInformationsPaddocksMessage(ICustomDataInput &input) {
    PaddockContentInformations _item2;
    this->_nbPaddockMaxFunc(input);
    unsigned int _paddocksInformationsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _paddocksInformationsLen; _i2++) {
        _item2.deserialize(input);
        this->paddocksInformations.push_back(_item2);
    }
}

void GuildInformationsPaddocksMessage::_nbPaddockMaxFunc(ICustomDataInput &input) {
    this->nbPaddockMax = input.readByte();

}

void GuildInformationsPaddocksMessage::_paddocksInformationsFunc(ICustomDataInput &input) {
    PaddockContentInformations _item;
    _item.deserialize(input);
    this->paddocksInformations.push_back(_item);
}

