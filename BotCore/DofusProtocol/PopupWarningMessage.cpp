#include "PopupWarningMessage.h"

void PopupWarningMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PopupWarningMessage(input);
}

void PopupWarningMessage::deserializeAs_PopupWarningMessage(ICustomDataInput &input) {
    this->_lockDurationFunc(input);
    this->_authorFunc(input);
    this->_contentFunc(input);
}

void PopupWarningMessage::_lockDurationFunc(ICustomDataInput &input) {
    this->lockDuration = input.readUnsignedByte();

}

void PopupWarningMessage::_authorFunc(ICustomDataInput &input) {
    this->author = input.readUTF();
}

void PopupWarningMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

