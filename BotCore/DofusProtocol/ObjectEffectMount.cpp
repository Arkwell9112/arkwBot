#include "../IO/BooleanByteWrapper.h"
#include "ObjectEffectMount.h"

void ObjectEffectMount::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffectMount(input);
}

void ObjectEffectMount::deserializeAs_ObjectEffectMount(ICustomDataInput &input) {
    ObjectEffectInteger _item13;
    unsigned int _val14 = 0;
    ObjectEffect::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_expirationDateFunc(input);
    this->_modelFunc(input);
    this->_nameFunc(input);
    this->_ownerFunc(input);
    this->_levelFunc(input);
    this->_reproductionCountFunc(input);
    this->_reproductionCountMaxFunc(input);
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i13 = 0; _i13 < _effectsLen; _i13++) {
        _item13.deserialize(input);
        this->effects.push_back(_item13);
    }
    unsigned int _capacitiesLen = input.readUnsignedShort();
    for (unsigned int _i14 = 0; _i14 < _capacitiesLen; _i14++) {
        _val14 = input.readVarUhInt();

        this->capacities.push_back(_val14);
    }
}

void ObjectEffectMount::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRideable = BooleanByteWrapper::getFlag(_box0, 1);
    this->isFeconded = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFecondationReady = BooleanByteWrapper::getFlag(_box0, 3);
}

void ObjectEffectMount::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

void ObjectEffectMount::_expirationDateFunc(ICustomDataInput &input) {
    this->expirationDate = input.readVarUhLong();

}

void ObjectEffectMount::_modelFunc(ICustomDataInput &input) {
    this->model = input.readVarUhInt();

}

void ObjectEffectMount::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void ObjectEffectMount::_ownerFunc(ICustomDataInput &input) {
    this->owner = input.readUTF();
}

void ObjectEffectMount::_levelFunc(ICustomDataInput &input) {
    this->level = input.readByte();

}

void ObjectEffectMount::_reproductionCountFunc(ICustomDataInput &input) {
    this->reproductionCount = input.readVarInt();
}

void ObjectEffectMount::_reproductionCountMaxFunc(ICustomDataInput &input) {
    this->reproductionCountMax = input.readVarUhInt();

}

void ObjectEffectMount::_effectsFunc(ICustomDataInput &input) {
    ObjectEffectInteger _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectEffectMount::_capacitiesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->capacities.push_back(_val);
}

