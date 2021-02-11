#include "ExchangeBidHouseInListRemovedMessage.h"

void ExchangeBidHouseInListRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseInListRemovedMessage(input);
}

void ExchangeBidHouseInListRemovedMessage::deserializeAs_ExchangeBidHouseInListRemovedMessage(ICustomDataInput &input) {
    this->_itemUIDFunc(input);
    this->_objectGIDFunc(input);
    this->_objectTypeFunc(input);
}

void ExchangeBidHouseInListRemovedMessage::_itemUIDFunc(ICustomDataInput &input) {
    this->itemUID = input.readInt();
}

void ExchangeBidHouseInListRemovedMessage::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ExchangeBidHouseInListRemovedMessage::_objectTypeFunc(ICustomDataInput &input) {
    this->objectType = input.readInt();

}

