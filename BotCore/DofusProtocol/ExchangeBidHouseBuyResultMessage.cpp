#include "ExchangeBidHouseBuyResultMessage.h"

void ExchangeBidHouseBuyResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseBuyResultMessage(input);
}

void ExchangeBidHouseBuyResultMessage::deserializeAs_ExchangeBidHouseBuyResultMessage(ICustomDataInput &input) {
    this->_uidFunc(input);
    this->_boughtFunc(input);
}

void ExchangeBidHouseBuyResultMessage::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readVarUhInt();

}

void ExchangeBidHouseBuyResultMessage::_boughtFunc(ICustomDataInput &input) {
    this->bought = input.readBoolean();
}

