#include "ChatServerCopyWithObjectMessage.h"

void ChatServerCopyWithObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatServerCopyWithObjectMessage(input);
}

void ChatServerCopyWithObjectMessage::deserializeAs_ChatServerCopyWithObjectMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ChatServerCopyMessage::deserialize(input);
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
}

void ChatServerCopyWithObjectMessage::_objectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objects.push_back(_item);
}

