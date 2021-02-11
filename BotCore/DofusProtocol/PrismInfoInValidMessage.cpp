#include "PrismInfoInValidMessage.h"

void PrismInfoInValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismInfoInValidMessage(input);
}

void PrismInfoInValidMessage::deserializeAs_PrismInfoInValidMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void PrismInfoInValidMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

