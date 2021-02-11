#include "ChatServerWithObjectMessage.h"

void ChatServerWithObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatServerWithObjectMessage(input);
}

void ChatServerWithObjectMessage::deserializeAs_ChatServerWithObjectMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ChatServerMessage::deserialize(input);
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
}

void ChatServerWithObjectMessage::_objectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objects.push_back(_item);
}

