#include "AbstractFightDispellableEffect.h"

void AbstractFightDispellableEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractFightDispellableEffect(input);
}

void AbstractFightDispellableEffect::deserializeAs_AbstractFightDispellableEffect(ICustomDataInput &input) {
    this->_uidFunc(input);
    this->_targetIdFunc(input);
    this->_turnDurationFunc(input);
    this->_dispelableFunc(input);
    this->_spellIdFunc(input);
    this->_effectIdFunc(input);
    this->_parentBoostUidFunc(input);
}

void AbstractFightDispellableEffect::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readVarUhInt();

}

void AbstractFightDispellableEffect::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void AbstractFightDispellableEffect::_turnDurationFunc(ICustomDataInput &input) {
    this->turnDuration = input.readShort();
}

void AbstractFightDispellableEffect::_dispelableFunc(ICustomDataInput &input) {
    this->dispelable = input.readByte();

}

void AbstractFightDispellableEffect::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void AbstractFightDispellableEffect::_effectIdFunc(ICustomDataInput &input) {
    this->effectId = input.readVarUhInt();

}

void AbstractFightDispellableEffect::_parentBoostUidFunc(ICustomDataInput &input) {
    this->parentBoostUid = input.readVarUhInt();

}

