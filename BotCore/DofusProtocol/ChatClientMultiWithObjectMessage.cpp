#include "ChatClientMultiWithObjectMessage.h"

void ChatClientMultiWithObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatClientMultiWithObjectMessage(input);
}

void ChatClientMultiWithObjectMessage::deserializeAs_ChatClientMultiWithObjectMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ChatClientMultiMessage::deserialize(input);
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
}

void ChatClientMultiWithObjectMessage::_objectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objects.push_back(_item);
}

