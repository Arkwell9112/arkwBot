#include "ChatClientPrivateWithObjectMessage.h"

void ChatClientPrivateWithObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatClientPrivateWithObjectMessage(input);
}

void ChatClientPrivateWithObjectMessage::deserializeAs_ChatClientPrivateWithObjectMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ChatClientPrivateMessage::deserialize(input);
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
}

void ChatClientPrivateWithObjectMessage::_objectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objects.push_back(_item);
}

