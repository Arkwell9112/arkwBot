#include "HavenBagPermissionsUpdateRequestMessage.h"

void HavenBagPermissionsUpdateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagPermissionsUpdateRequestMessage(input);
}

void HavenBagPermissionsUpdateRequestMessage::deserializeAs_HavenBagPermissionsUpdateRequestMessage(
        ICustomDataInput &input) {
    this->_permissionsFunc(input);
}

void HavenBagPermissionsUpdateRequestMessage::_permissionsFunc(ICustomDataInput &input) {
    this->permissions = input.readInt();

}

