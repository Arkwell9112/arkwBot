#include "../IO/BooleanByteWrapper.h"
#include "IgnoredDeleteResultMessage.h"

void IgnoredDeleteResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredDeleteResultMessage(input);
}

void IgnoredDeleteResultMessage::deserializeAs_IgnoredDeleteResultMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_nameFunc(input);
}

void IgnoredDeleteResultMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->session = BooleanByteWrapper::getFlag(_box0, 1);
}

void IgnoredDeleteResultMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

