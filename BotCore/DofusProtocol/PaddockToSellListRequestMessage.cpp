#include "PaddockToSellListRequestMessage.h"

void PaddockToSellListRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockToSellListRequestMessage(input);
}

void PaddockToSellListRequestMessage::deserializeAs_PaddockToSellListRequestMessage(ICustomDataInput &input) {
    this->_pageIndexFunc(input);
}

void PaddockToSellListRequestMessage::_pageIndexFunc(ICustomDataInput &input) {
    this->pageIndex = input.readVarUhShort();

}

