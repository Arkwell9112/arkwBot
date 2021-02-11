#include "../ProtocolTypeManager.h"
#include "UpdateMountCharacteristicsMessage.h"

void UpdateMountCharacteristicsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateMountCharacteristicsMessage(input);
}

void UpdateMountCharacteristicsMessage::deserializeAs_UpdateMountCharacteristicsMessage(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    UpdateMountCharacteristic _item2;
    this->_rideIdFunc(input);
    unsigned int _boostToUpdateListLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _boostToUpdateListLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<UpdateMountCharacteristic>(input, _id2);
        this->boostToUpdateList.push_back(_item2);
    }
}

void UpdateMountCharacteristicsMessage::_rideIdFunc(ICustomDataInput &input) {
    this->rideId = input.readVarInt();
}

void UpdateMountCharacteristicsMessage::_boostToUpdateListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    UpdateMountCharacteristic _item = ProtocolTypeManager::getObject<UpdateMountCharacteristic>(input, _id);
    _item.deserialize(input);
    this->boostToUpdateList.push_back(_item);
}

