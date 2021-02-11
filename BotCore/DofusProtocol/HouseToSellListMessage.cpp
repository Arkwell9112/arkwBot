#include "HouseToSellListMessage.h"

void HouseToSellListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseToSellListMessage(input);
}

void HouseToSellListMessage::deserializeAs_HouseToSellListMessage(ICustomDataInput &input) {
    HouseInformationsForSell _item3;
    this->_pageIndexFunc(input);
    this->_totalPageFunc(input);
    unsigned int _houseListLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _houseListLen; _i3++) {
        _item3.deserialize(input);
        this->houseList.push_back(_item3);
    }
}

void HouseToSellListMessage::_pageIndexFunc(ICustomDataInput &input) {
    this->pageIndex = input.readVarUhShort();

}

void HouseToSellListMessage::_totalPageFunc(ICustomDataInput &input) {
    this->totalPage = input.readVarUhShort();

}

void HouseToSellListMessage::_houseListFunc(ICustomDataInput &input) {
    HouseInformationsForSell _item;
    _item.deserialize(input);
    this->houseList.push_back(_item);
}

