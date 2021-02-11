#include "PortalInformation.h"

void PortalInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PortalInformation(input);
}

void PortalInformation::deserializeAs_PortalInformation(ICustomDataInput &input) {
    this->_portalIdFunc(input);
    this->_areaIdFunc(input);
}

void PortalInformation::_portalIdFunc(ICustomDataInput &input) {
    this->portalId = input.readInt();
}

void PortalInformation::_areaIdFunc(ICustomDataInput &input) {
    this->areaId = input.readShort();
}

