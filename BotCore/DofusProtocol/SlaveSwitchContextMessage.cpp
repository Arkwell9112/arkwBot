#include "../ProtocolTypeManager.h"
#include "SlaveSwitchContextMessage.h"

void SlaveSwitchContextMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SlaveSwitchContextMessage(input);
}

void SlaveSwitchContextMessage::deserializeAs_SlaveSwitchContextMessage(ICustomDataInput &input) {
    SpellItem _item3;
    unsigned int _id5 = 0;
    Shortcut _item5;
    this->_masterIdFunc(input);
    this->_slaveIdFunc(input);
    unsigned int _slaveSpellsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _slaveSpellsLen; _i3++) {
        _item3.deserialize(input);
        this->slaveSpells.push_back(_item3);
    }
    this->slaveStats.deserialize(input);
    unsigned int _shortcutsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _shortcutsLen; _i5++) {
        _id5 = input.readUnsignedShort();
        _item5 = ProtocolTypeManager::getObject<Shortcut>(input, _id5);
        this->shortcuts.push_back(_item5);
    }
}

void SlaveSwitchContextMessage::_masterIdFunc(ICustomDataInput &input) {
    this->masterId = input.readDouble();

}

void SlaveSwitchContextMessage::_slaveIdFunc(ICustomDataInput &input) {
    this->slaveId = input.readDouble();

}

void SlaveSwitchContextMessage::_slaveSpellsFunc(ICustomDataInput &input) {
    SpellItem _item;
    _item.deserialize(input);
    this->slaveSpells.push_back(_item);
}

void SlaveSwitchContextMessage::_shortcutsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    Shortcut _item = ProtocolTypeManager::getObject<Shortcut>(input, _id);
    _item.deserialize(input);
    this->shortcuts.push_back(_item);
}

