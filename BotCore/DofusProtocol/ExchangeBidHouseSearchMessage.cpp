#include "ExchangeBidHouseSearchMessage.h"

void ExchangeBidHouseSearchMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseSearchMessage(input);
}

void ExchangeBidHouseSearchMessage::deserializeAs_ExchangeBidHouseSearchMessage(ICustomDataInput &input) {
    this->_genIdFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseSearchMessage::_genIdFunc(ICustomDataInput &input) {
    this->genId = input.readVarUhShort();

}

void ExchangeBidHouseSearchMessage::_followFunc(ICustomDataInput &input) {
    this->follow = input.readBoolean();
}

