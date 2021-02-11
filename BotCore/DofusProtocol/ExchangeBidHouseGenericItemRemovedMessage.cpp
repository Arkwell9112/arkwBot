#include "ExchangeBidHouseGenericItemRemovedMessage.h"

void ExchangeBidHouseGenericItemRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseGenericItemRemovedMessage(input);
}

void ExchangeBidHouseGenericItemRemovedMessage::deserializeAs_ExchangeBidHouseGenericItemRemovedMessage(
        ICustomDataInput &input) {
    this->_objGenericIdFunc(input);
}

void ExchangeBidHouseGenericItemRemovedMessage::_objGenericIdFunc(ICustomDataInput &input) {
    this->objGenericId = input.readVarUhShort();

}

