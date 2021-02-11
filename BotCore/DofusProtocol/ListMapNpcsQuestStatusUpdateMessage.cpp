#include "ListMapNpcsQuestStatusUpdateMessage.h"

void ListMapNpcsQuestStatusUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ListMapNpcsQuestStatusUpdateMessage(input);
}

void ListMapNpcsQuestStatusUpdateMessage::deserializeAs_ListMapNpcsQuestStatusUpdateMessage(ICustomDataInput &input) {
    MapNpcQuestInfo _item1;
    unsigned int _mapInfoLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mapInfoLen; _i1++) {
        _item1.deserialize(input);
        this->mapInfo.push_back(_item1);
    }
}

void ListMapNpcsQuestStatusUpdateMessage::_mapInfoFunc(ICustomDataInput &input) {
    MapNpcQuestInfo _item;
    _item.deserialize(input);
    this->mapInfo.push_back(_item);
}

