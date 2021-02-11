#include "../ProtocolTypeManager.h"
#include "ShortcutBarReplacedMessage.h"

void ShortcutBarReplacedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarReplacedMessage(input);
}

void ShortcutBarReplacedMessage::deserializeAs_ShortcutBarReplacedMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->shortcut = ProtocolTypeManager::getObject<Shortcut>(input, _id2);
}

void ShortcutBarReplacedMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

