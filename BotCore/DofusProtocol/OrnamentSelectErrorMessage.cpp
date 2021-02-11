#include "OrnamentSelectErrorMessage.h"

void OrnamentSelectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OrnamentSelectErrorMessage(input);
}

void OrnamentSelectErrorMessage::deserializeAs_OrnamentSelectErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void OrnamentSelectErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

