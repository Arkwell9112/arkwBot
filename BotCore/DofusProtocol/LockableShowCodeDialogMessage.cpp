#include "LockableShowCodeDialogMessage.h"

void LockableShowCodeDialogMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableShowCodeDialogMessage(input);
}

void LockableShowCodeDialogMessage::deserializeAs_LockableShowCodeDialogMessage(ICustomDataInput &input) {
    this->_changeOrUseFunc(input);
    this->_codeSizeFunc(input);
}

void LockableShowCodeDialogMessage::_changeOrUseFunc(ICustomDataInput &input) {
    this->changeOrUse = input.readBoolean();
}

void LockableShowCodeDialogMessage::_codeSizeFunc(ICustomDataInput &input) {
    this->codeSize = input.readByte();

}

