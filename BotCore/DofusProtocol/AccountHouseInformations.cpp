#include "../ProtocolTypeManager.h"
#include "AccountHouseInformations.h"

void AccountHouseInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccountHouseInformations(input);
}

void AccountHouseInformations::deserializeAs_AccountHouseInformations(ICustomDataInput &input) {
    HouseInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->houseInfos = ProtocolTypeManager::getObject<HouseInstanceInformations>(input, _id1);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void AccountHouseInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void AccountHouseInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void AccountHouseInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void AccountHouseInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

