#include "HavenBagPermissionsUpdateMessage.h"

void HavenBagPermissionsUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagPermissionsUpdateMessage(input);
}

void HavenBagPermissionsUpdateMessage::deserializeAs_HavenBagPermissionsUpdateMessage(ICustomDataInput &input) {
    this->_permissionsFunc(input);
}

void HavenBagPermissionsUpdateMessage::_permissionsFunc(ICustomDataInput &input) {
    this->permissions = input.readInt();

}

