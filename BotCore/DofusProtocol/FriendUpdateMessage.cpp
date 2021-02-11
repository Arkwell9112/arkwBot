#include "../ProtocolTypeManager.h"
#include "FriendUpdateMessage.h"

void FriendUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendUpdateMessage(input);
}

void FriendUpdateMessage::deserializeAs_FriendUpdateMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->friendUpdated = ProtocolTypeManager::getObject<FriendInformations>(input, _id1);
}

