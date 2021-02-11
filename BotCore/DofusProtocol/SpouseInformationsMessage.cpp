#include "../ProtocolTypeManager.h"
#include "SpouseInformationsMessage.h"

void SpouseInformationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpouseInformationsMessage(input);
}

void SpouseInformationsMessage::deserializeAs_SpouseInformationsMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->spouse = ProtocolTypeManager::getObject<FriendSpouseInformations>(input, _id1);
}

