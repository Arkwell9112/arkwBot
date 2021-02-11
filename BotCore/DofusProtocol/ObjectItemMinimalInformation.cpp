#include "../ProtocolTypeManager.h"
#include "ObjectItemMinimalInformation.h"

void ObjectItemMinimalInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemMinimalInformation(input);
}

void ObjectItemMinimalInformation::deserializeAs_ObjectItemMinimalInformation(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    ObjectEffect _item2;
    Item::deserialize(input);
    this->_objectGIDFunc(input);
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _effectsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id2);
        this->effects.push_back(_item2);
    }
}

void ObjectItemMinimalInformation::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ObjectItemMinimalInformation::_effectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->effects.push_back(_item);
}

