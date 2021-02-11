#include "../ProtocolTypeManager.h"
#include "PlayerStatusUpdateRequestMessage.h"

void PlayerStatusUpdateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PlayerStatusUpdateRequestMessage(input);
}

void PlayerStatusUpdateRequestMessage::deserializeAs_PlayerStatusUpdateRequestMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id1);
}

