#include "../ProtocolTypeManager.h"
#include "ExchangeBidHouseInListAddedMessage.h"

void ExchangeBidHouseInListAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseInListAddedMessage(input);
}

void ExchangeBidHouseInListAddedMessage::deserializeAs_ExchangeBidHouseInListAddedMessage(ICustomDataInput &input) {
    unsigned int _id4 = 0;
    ObjectEffect _item4;
    double _val5 = 0;
    this->_itemUIDFunc(input);
    this->_objectGIDFunc(input);
    this->_objectTypeFunc(input);
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _effectsLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id4);
        this->effects.push_back(_item4);
    }
    unsigned int _pricesLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _pricesLen; _i5++) {
        _val5 = input.readVarUhLong();

        this->prices.push_back(_val5);
    }
}

void ExchangeBidHouseInListAddedMessage::_itemUIDFunc(ICustomDataInput &input) {
    this->itemUID = input.readInt();
}

void ExchangeBidHouseInListAddedMessage::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ExchangeBidHouseInListAddedMessage::_objectTypeFunc(ICustomDataInput &input) {
    this->objectType = input.readInt();

}

void ExchangeBidHouseInListAddedMessage::_effectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ExchangeBidHouseInListAddedMessage::_pricesFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->prices.push_back(_val);
}

