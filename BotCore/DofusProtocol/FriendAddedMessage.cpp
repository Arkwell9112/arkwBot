#include "../ProtocolTypeManager.h"
#include "FriendAddedMessage.h"

void FriendAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendAddedMessage(input);
}

void FriendAddedMessage::deserializeAs_FriendAddedMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->friendAdded = ProtocolTypeManager::getObject<FriendInformations>(input, _id1);
}

