#include "../ProtocolTypeManager.h"
#include "ObjectEffects.h"

void ObjectEffects::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectEffects(input);
}

void ObjectEffects::deserializeAs_ObjectEffects(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    ObjectEffect _item1;
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _effectsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id1);
        this->effects.push_back(_item1);
    }
}

void ObjectEffects::_effectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->effects.push_back(_item);
}

