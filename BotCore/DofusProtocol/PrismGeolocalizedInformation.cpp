#include "../ProtocolTypeManager.h"
#include "PrismGeolocalizedInformation.h"

void PrismGeolocalizedInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismGeolocalizedInformation(input);
}

void PrismGeolocalizedInformation::deserializeAs_PrismGeolocalizedInformation(ICustomDataInput &input) {
    PrismSubareaEmptyInfo::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    unsigned int _id4 = input.readUnsignedShort();
    this->prism = ProtocolTypeManager::getObject<PrismInformation>(input, _id4);
}

void PrismGeolocalizedInformation::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PrismGeolocalizedInformation::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PrismGeolocalizedInformation::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

