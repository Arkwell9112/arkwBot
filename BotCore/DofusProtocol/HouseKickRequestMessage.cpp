#include "HouseKickRequestMessage.h"

void HouseKickRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseKickRequestMessage(input);
}

void HouseKickRequestMessage::deserializeAs_HouseKickRequestMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void HouseKickRequestMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

