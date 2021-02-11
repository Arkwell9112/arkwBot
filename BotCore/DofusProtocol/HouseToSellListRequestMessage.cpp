#include "HouseToSellListRequestMessage.h"

void HouseToSellListRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseToSellListRequestMessage(input);
}

void HouseToSellListRequestMessage::deserializeAs_HouseToSellListRequestMessage(ICustomDataInput &input) {
    this->_pageIndexFunc(input);
}

void HouseToSellListRequestMessage::_pageIndexFunc(ICustomDataInput &input) {
    this->pageIndex = input.readVarUhShort();

}

