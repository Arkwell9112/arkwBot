#include "ObjectItemToSellInBid.h"

void ObjectItemToSellInBid::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemToSellInBid(input);
}

void ObjectItemToSellInBid::deserializeAs_ObjectItemToSellInBid(ICustomDataInput &input) {
    ObjectItemToSell::deserialize(input);
    this->_unsoldDelayFunc(input);
}

void ObjectItemToSellInBid::_unsoldDelayFunc(ICustomDataInput &input) {
    this->unsoldDelay = input.readInt();

}

