#include "../ProtocolTypeManager.h"
#include "IgnoredListMessage.h"

void IgnoredListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredListMessage(input);
}

void IgnoredListMessage::deserializeAs_IgnoredListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    IgnoredInformations _item1;
    unsigned int _ignoredListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _ignoredListLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<IgnoredInformations>(input, _id1);
        this->ignoredList.push_back(_item1);
    }
}

void IgnoredListMessage::_ignoredListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    IgnoredInformations _item = ProtocolTypeManager::getObject<IgnoredInformations>(input, _id);
    _item.deserialize(input);
    this->ignoredList.push_back(_item);
}

