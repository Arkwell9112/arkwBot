#include "ExchangeStartOkNpcShopMessage.h"

void ExchangeStartOkNpcShopMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkNpcShopMessage(input);
}

void ExchangeStartOkNpcShopMessage::deserializeAs_ExchangeStartOkNpcShopMessage(ICustomDataInput &input) {
    ObjectItemToSellInNpcShop _item3;
    this->_npcSellerIdFunc(input);
    this->_tokenIdFunc(input);
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _objectsInfosLen; _i3++) {
        _item3.deserialize(input);
        this->objectsInfos.push_back(_item3);
    }
}

void ExchangeStartOkNpcShopMessage::_npcSellerIdFunc(ICustomDataInput &input) {
    this->npcSellerId = input.readDouble();

}

void ExchangeStartOkNpcShopMessage::_tokenIdFunc(ICustomDataInput &input) {
    this->tokenId = input.readVarUhShort();

}

void ExchangeStartOkNpcShopMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItemToSellInNpcShop _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

