#include "PrismUseRequestMessage.h"

void PrismUseRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismUseRequestMessage(input);
}

void PrismUseRequestMessage::deserializeAs_PrismUseRequestMessage(ICustomDataInput &input) {
    this->_moduleToUseFunc(input);
}

void PrismUseRequestMessage::_moduleToUseFunc(ICustomDataInput &input) {
    this->moduleToUse = input.readByte();

}

