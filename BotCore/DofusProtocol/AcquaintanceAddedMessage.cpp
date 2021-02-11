#include "../ProtocolTypeManager.h"
#include "AcquaintanceAddedMessage.h"

void AcquaintanceAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceAddedMessage(input);
}

void AcquaintanceAddedMessage::deserializeAs_AcquaintanceAddedMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->acquaintanceAdded = ProtocolTypeManager::getObject<AcquaintanceInformation>(input, _id1);
}

