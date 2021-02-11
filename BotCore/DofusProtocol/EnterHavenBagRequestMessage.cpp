#include "EnterHavenBagRequestMessage.h"

void EnterHavenBagRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EnterHavenBagRequestMessage(input);
}

void EnterHavenBagRequestMessage::deserializeAs_EnterHavenBagRequestMessage(ICustomDataInput &input) {
    this->_havenBagOwnerFunc(input);
}

void EnterHavenBagRequestMessage::_havenBagOwnerFunc(ICustomDataInput &input) {
    this->havenBagOwner = input.readVarUhLong();

}

