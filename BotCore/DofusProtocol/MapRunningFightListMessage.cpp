#include "MapRunningFightListMessage.h"

void MapRunningFightListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapRunningFightListMessage(input);
}

void MapRunningFightListMessage::deserializeAs_MapRunningFightListMessage(ICustomDataInput &input) {
    FightExternalInformations _item1;
    unsigned int _fightsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _fightsLen; _i1++) {
        _item1.deserialize(input);
        this->fights.push_back(_item1);
    }
}

void MapRunningFightListMessage::_fightsFunc(ICustomDataInput &input) {
    FightExternalInformations _item;
    _item.deserialize(input);
    this->fights.push_back(_item);
}

