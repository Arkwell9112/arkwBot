#include "ExchangeBidHouseTypeMessage.h"

void ExchangeBidHouseTypeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseTypeMessage(input);
}

void ExchangeBidHouseTypeMessage::deserializeAs_ExchangeBidHouseTypeMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseTypeMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readVarUhInt();

}

void ExchangeBidHouseTypeMessage::_followFunc(ICustomDataInput &input) {
    this->follow = input.readBoolean();
}

