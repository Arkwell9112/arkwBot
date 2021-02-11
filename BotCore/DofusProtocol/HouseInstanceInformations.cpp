#include "../IO/BooleanByteWrapper.h"
#include "HouseInstanceInformations.h"

void HouseInstanceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseInstanceInformations(input);
}

void HouseInstanceInformations::deserializeAs_HouseInstanceInformations(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_instanceIdFunc(input);
    this->_ownerNameFunc(input);
    this->_priceFunc(input);
}

void HouseInstanceInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 0);
    this->isLocked = BooleanByteWrapper::getFlag(_box0, 1);
    this->isSaleLocked = BooleanByteWrapper::getFlag(_box0, 2);
}

void HouseInstanceInformations::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseInstanceInformations::_ownerNameFunc(ICustomDataInput &input) {
    this->ownerName = input.readUTF();
}

void HouseInstanceInformations::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarLong();

}

