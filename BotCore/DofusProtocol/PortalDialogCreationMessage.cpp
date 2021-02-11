#include "PortalDialogCreationMessage.h"

void PortalDialogCreationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PortalDialogCreationMessage(input);
}

void PortalDialogCreationMessage::deserializeAs_PortalDialogCreationMessage(ICustomDataInput &input) {
    NpcDialogCreationMessage::deserialize(input);
    this->_typeFunc(input);
}

void PortalDialogCreationMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readInt();

}

