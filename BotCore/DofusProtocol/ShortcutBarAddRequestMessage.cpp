#include "../ProtocolTypeManager.h"
#include "ShortcutBarAddRequestMessage.h"

void ShortcutBarAddRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarAddRequestMessage(input);
}

void ShortcutBarAddRequestMessage::deserializeAs_ShortcutBarAddRequestMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->shortcut = ProtocolTypeManager::getObject<Shortcut>(input, _id2);
}

void ShortcutBarAddRequestMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

