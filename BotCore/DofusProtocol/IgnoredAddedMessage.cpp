#include "../ProtocolTypeManager.h"
#include "IgnoredAddedMessage.h"

void IgnoredAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredAddedMessage(input);
}

void IgnoredAddedMessage::deserializeAs_IgnoredAddedMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->ignoreAdded = ProtocolTypeManager::getObject<IgnoredInformations>(input, _id1);
    this->_sessionFunc(input);
}

void IgnoredAddedMessage::_sessionFunc(ICustomDataInput &input) {
    this->session = input.readBoolean();
}

