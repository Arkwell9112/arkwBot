#include "MountHarnessColorsUpdateRequestMessage.h"

void MountHarnessColorsUpdateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountHarnessColorsUpdateRequestMessage(input);
}

void
MountHarnessColorsUpdateRequestMessage::deserializeAs_MountHarnessColorsUpdateRequestMessage(ICustomDataInput &input) {
    this->_useHarnessColorsFunc(input);
}

void MountHarnessColorsUpdateRequestMessage::_useHarnessColorsFunc(ICustomDataInput &input) {
    this->useHarnessColors = input.readBoolean();
}

