#include "MapNpcQuestInfo.h"

void MapNpcQuestInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapNpcQuestInfo(input);
}

void MapNpcQuestInfo::deserializeAs_MapNpcQuestInfo(ICustomDataInput &input) {
    int _val2 = 0;
    GameRolePlayNpcQuestFlag _item3;
    this->_mapIdFunc(input);
    unsigned int _npcsIdsWithQuestLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _npcsIdsWithQuestLen; _i2++) {
        _val2 = input.readInt();
        this->npcsIdsWithQuest.push_back(_val2);
    }
    unsigned int _questFlagsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _questFlagsLen; _i3++) {
        _item3.deserialize(input);
        this->questFlags.push_back(_item3);
    }
}

void MapNpcQuestInfo::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void MapNpcQuestInfo::_npcsIdsWithQuestFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->npcsIdsWithQuest.push_back(_val);
}

void MapNpcQuestInfo::_questFlagsFunc(ICustomDataInput &input) {
    GameRolePlayNpcQuestFlag _item;
    _item.deserialize(input);
    this->questFlags.push_back(_item);
}

