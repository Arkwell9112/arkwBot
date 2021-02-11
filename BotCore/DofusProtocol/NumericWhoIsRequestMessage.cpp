#include "NumericWhoIsRequestMessage.h"

void NumericWhoIsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NumericWhoIsRequestMessage(input);
}

void NumericWhoIsRequestMessage::deserializeAs_NumericWhoIsRequestMessage(ICustomDataInput &input) {
    this->_playerIdFunc(input);
}

void NumericWhoIsRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

