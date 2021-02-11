#include "PaddockToSellListMessage.h"

void PaddockToSellListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockToSellListMessage(input);
}

void PaddockToSellListMessage::deserializeAs_PaddockToSellListMessage(ICustomDataInput &input) {
    PaddockInformationsForSell _item3;
    this->_pageIndexFunc(input);
    this->_totalPageFunc(input);
    unsigned int _paddockListLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _paddockListLen; _i3++) {
        _item3.deserialize(input);
        this->paddockList.push_back(_item3);
    }
}

void PaddockToSellListMessage::_pageIndexFunc(ICustomDataInput &input) {
    this->pageIndex = input.readVarUhShort();

}

void PaddockToSellListMessage::_totalPageFunc(ICustomDataInput &input) {
    this->totalPage = input.readVarUhShort();

}

void PaddockToSellListMessage::_paddockListFunc(ICustomDataInput &input) {
    PaddockInformationsForSell _item;
    _item.deserialize(input);
    this->paddockList.push_back(_item);
}

