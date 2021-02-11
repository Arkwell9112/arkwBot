#include "ExchangeBidHouseGenericItemAddedMessage.h"

void ExchangeBidHouseGenericItemAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseGenericItemAddedMessage(input);
}

void ExchangeBidHouseGenericItemAddedMessage::deserializeAs_ExchangeBidHouseGenericItemAddedMessage(
        ICustomDataInput &input) {
    this->_objGenericIdFunc(input);
}

void ExchangeBidHouseGenericItemAddedMessage::_objGenericIdFunc(ICustomDataInput &input) {
    this->objGenericId = input.readVarUhShort();

}

