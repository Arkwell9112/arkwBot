#include "ItemForPreset.h"

void ItemForPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ItemForPreset(input);
}

void ItemForPreset::deserializeAs_ItemForPreset(ICustomDataInput &input) {
    this->_positionFunc(input);
    this->_objGidFunc(input);
    this->_objUidFunc(input);
}

void ItemForPreset::_positionFunc(ICustomDataInput &input) {
    this->position = input.readShort();

}

void ItemForPreset::_objGidFunc(ICustomDataInput &input) {
    this->objGid = input.readVarUhShort();

}

void ItemForPreset::_objUidFunc(ICustomDataInput &input) {
    this->objUid = input.readVarUhInt();

}

