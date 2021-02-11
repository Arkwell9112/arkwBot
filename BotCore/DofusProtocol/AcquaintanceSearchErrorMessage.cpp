#include "AcquaintanceSearchErrorMessage.h"

void AcquaintanceSearchErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceSearchErrorMessage(input);
}

void AcquaintanceSearchErrorMessage::deserializeAs_AcquaintanceSearchErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void AcquaintanceSearchErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

