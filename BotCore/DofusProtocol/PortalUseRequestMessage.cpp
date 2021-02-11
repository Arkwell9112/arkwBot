#include "PortalUseRequestMessage.h"

void PortalUseRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PortalUseRequestMessage(input);
}

void PortalUseRequestMessage::deserializeAs_PortalUseRequestMessage(ICustomDataInput &input) {
    this->_portalIdFunc(input);
}

void PortalUseRequestMessage::_portalIdFunc(ICustomDataInput &input) {
    this->portalId = input.readVarUhInt();

}

