#include "EntityLook.h"

void EntityLook::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityLook(input);
}

void EntityLook::deserializeAs_EntityLook(ICustomDataInput &input) {
    EntityLook look;
    unsigned int _val2 = 0;
    int _val3 = 0;
    int _val4 = 0;
    this->_bonesIdFunc(input);
    unsigned int _skinsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _skinsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->skins.push_back(_val2);
    }
    unsigned int _indexedColorsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _indexedColorsLen; _i3++) {
        _val3 = input.readInt();
        this->indexedColors.push_back(_val3);
    }
    unsigned int _scalesLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _scalesLen; _i4++) {
        _val4 = input.readVarShort();
        this->scales.push_back(_val4);
    }
    unsigned int _subentitiesLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _subentitiesLen; _i5++) {
        input.readByte();
        input.readByte();
        look.deserialize(input);
    }
}

void EntityLook::_bonesIdFunc(ICustomDataInput &input) {
    this->bonesId = input.readVarUhShort();

}

void EntityLook::_skinsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->skins.push_back(_val);
}

void EntityLook::_indexedColorsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->indexedColors.push_back(_val);
}

void EntityLook::_scalesFunc(ICustomDataInput &input) {
    int _val = input.readVarShort();
    this->scales.push_back(_val);
}