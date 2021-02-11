#include "../ProtocolTypeManager.h"
#include "SetUpdateMessage.h"

void SetUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SetUpdateMessage(input);
}

void SetUpdateMessage::deserializeAs_SetUpdateMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    unsigned int _id3 = 0;
    ObjectEffect _item3;
    this->_setIdFunc(input);
    unsigned int _setObjectsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _setObjectsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->setObjects.push_back(_val2);
    }
    unsigned int _setEffectsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _setEffectsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id3);
        this->setEffects.push_back(_item3);
    }
}

void SetUpdateMessage::_setIdFunc(ICustomDataInput &input) {
    this->setId = input.readVarUhShort();

}

void SetUpdateMessage::_setObjectsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->setObjects.push_back(_val);
}

void SetUpdateMessage::_setEffectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->setEffects.push_back(_item);
}

