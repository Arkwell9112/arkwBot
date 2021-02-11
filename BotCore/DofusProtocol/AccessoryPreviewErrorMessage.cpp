#include "AccessoryPreviewErrorMessage.h"

void AccessoryPreviewErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccessoryPreviewErrorMessage(input);
}

void AccessoryPreviewErrorMessage::deserializeAs_AccessoryPreviewErrorMessage(ICustomDataInput &input) {
    this->_errorFunc(input);
}

void AccessoryPreviewErrorMessage::_errorFunc(ICustomDataInput &input) {
    this->error = input.readByte();

}

