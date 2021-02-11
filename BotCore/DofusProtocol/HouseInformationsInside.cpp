#include "../ProtocolTypeManager.h"
#include "HouseInformationsInside.h"

void HouseInformationsInside::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseInformationsInside(input);
}

void HouseInformationsInside::deserializeAs_HouseInformationsInside(ICustomDataInput &input) {
    HouseInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->houseInfos = ProtocolTypeManager::getObject<HouseInstanceInformations>(input, _id1);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void HouseInformationsInside::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void HouseInformationsInside::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

