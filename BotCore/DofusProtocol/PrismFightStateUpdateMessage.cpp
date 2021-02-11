#include "PrismFightStateUpdateMessage.h"

void PrismFightStateUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightStateUpdateMessage(input);
}

void PrismFightStateUpdateMessage::deserializeAs_PrismFightStateUpdateMessage(ICustomDataInput &input) {
    this->_stateFunc(input);
}

void PrismFightStateUpdateMessage::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

