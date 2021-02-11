#include "../ProtocolTypeManager.h"
#include "ShortcutBarRefreshMessage.h"

void ShortcutBarRefreshMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarRefreshMessage(input);
}

void ShortcutBarRefreshMessage::deserializeAs_ShortcutBarRefreshMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->shortcut = ProtocolTypeManager::getObject<Shortcut>(input, _id2);
}

void ShortcutBarRefreshMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

