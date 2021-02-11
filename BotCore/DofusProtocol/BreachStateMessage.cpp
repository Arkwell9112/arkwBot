#include "BreachStateMessage.h"

void BreachStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachStateMessage(input);
}

void BreachStateMessage::deserializeAs_BreachStateMessage(ICustomDataInput &input) {
    ObjectEffectInteger _item2;
    this->owner.deserialize(input);
    unsigned int _bonusesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _bonusesLen; _i2++) {
        _item2.deserialize(input);
        this->bonuses.push_back(_item2);
    }
    this->_bugdetFunc(input);
    this->_savedFunc(input);
}

void BreachStateMessage::_bonusesFunc(ICustomDataInput &input) {
    ObjectEffectInteger _item;
    _item.deserialize(input);
    this->bonuses.push_back(_item);
}

void BreachStateMessage::_bugdetFunc(ICustomDataInput &input) {
    this->bugdet = input.readVarUhInt();

}

void BreachStateMessage::_savedFunc(ICustomDataInput &input) {
    this->saved = input.readBoolean();
}

