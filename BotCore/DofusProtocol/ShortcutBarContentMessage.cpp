#include "../ProtocolTypeManager.h"
#include "ShortcutBarContentMessage.h"

void ShortcutBarContentMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarContentMessage(input);
}

void ShortcutBarContentMessage::deserializeAs_ShortcutBarContentMessage(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    Shortcut _item2;
    this->_barTypeFunc(input);
    unsigned int _shortcutsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _shortcutsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<Shortcut>(input, _id2);
        this->shortcuts.push_back(_item2);
    }
}

void ShortcutBarContentMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

void ShortcutBarContentMessage::_shortcutsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    Shortcut _item = ProtocolTypeManager::getObject<Shortcut>(input, _id);
    _item.deserialize(input);
    this->shortcuts.push_back(_item);
}

