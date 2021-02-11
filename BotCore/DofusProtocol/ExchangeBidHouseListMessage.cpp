#include "ExchangeBidHouseListMessage.h"

void ExchangeBidHouseListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseListMessage(input);
}

void ExchangeBidHouseListMessage::deserializeAs_ExchangeBidHouseListMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseListMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void ExchangeBidHouseListMessage::_followFunc(ICustomDataInput &input) {
    this->follow = input.readBoolean();
}

