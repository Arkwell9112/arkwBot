#include "MimicryObjectErrorMessage.h"

void MimicryObjectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MimicryObjectErrorMessage(input);
}

void MimicryObjectErrorMessage::deserializeAs_MimicryObjectErrorMessage(ICustomDataInput &input) {
    SymbioticObjectErrorMessage::deserialize(input);
    this->_previewFunc(input);
}

void MimicryObjectErrorMessage::_previewFunc(ICustomDataInput &input) {
    this->preview = input.readBoolean();
}

