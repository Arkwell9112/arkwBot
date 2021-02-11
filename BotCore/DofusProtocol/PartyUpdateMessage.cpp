#include "../ProtocolTypeManager.h"
#include "PartyUpdateMessage.h"

void PartyUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyUpdateMessage(input);
}

void PartyUpdateMessage::deserializeAs_PartyUpdateMessage(ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->memberInformations = ProtocolTypeManager::getObject<PartyMemberInformations>(input, _id1);
}

