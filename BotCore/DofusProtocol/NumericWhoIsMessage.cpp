#include "NumericWhoIsMessage.h"

void NumericWhoIsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NumericWhoIsMessage(input);
}

void NumericWhoIsMessage::deserializeAs_NumericWhoIsMessage(ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_accountIdFunc(input);
}

void NumericWhoIsMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void NumericWhoIsMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

