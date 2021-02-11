#include "SpouseStatusMessage.h"

void SpouseStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpouseStatusMessage(input);
}

void SpouseStatusMessage::deserializeAs_SpouseStatusMessage(ICustomDataInput &input) {
    this->_hasSpouseFunc(input);
}

void SpouseStatusMessage::_hasSpouseFunc(ICustomDataInput &input) {
    this->hasSpouse = input.readBoolean();
}

