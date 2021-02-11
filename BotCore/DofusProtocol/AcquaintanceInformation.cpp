#include "AcquaintanceInformation.h"

void AcquaintanceInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceInformation(input);
}

void AcquaintanceInformation::deserializeAs_AcquaintanceInformation(ICustomDataInput &input) {
    AbstractContactInformations::deserialize(input);
    this->_playerStateFunc(input);
}

void AcquaintanceInformation::_playerStateFunc(ICustomDataInput &input) {
    this->playerState = input.readByte();

}

