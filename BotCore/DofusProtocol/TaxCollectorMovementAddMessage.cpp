#include "../ProtocolTypeManager.h"
#include "TaxCollectorMovementAddMessage.h"

void TaxCollectorMovementAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorMovementAddMessage(input);
}

void TaxCollectorMovementAddMessage::deserializeAs_TaxCollectorMovementAddMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->informations = ProtocolTypeManager::getObject<TaxCollectorInformations>(input, _id1);
}

