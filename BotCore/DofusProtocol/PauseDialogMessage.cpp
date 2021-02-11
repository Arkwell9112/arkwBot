#include "PauseDialogMessage.h"

void PauseDialogMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PauseDialogMessage(input);
}

void PauseDialogMessage::deserializeAs_PauseDialogMessage(ICustomDataInput &input) {
    this->_dialogTypeFunc(input);
}

void PauseDialogMessage::_dialogTypeFunc(ICustomDataInput &input) {
    this->dialogType = input.readByte();

}

