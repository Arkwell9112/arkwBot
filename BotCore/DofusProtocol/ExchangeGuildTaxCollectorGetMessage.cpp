#include "ExchangeGuildTaxCollectorGetMessage.h"

void ExchangeGuildTaxCollectorGetMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeGuildTaxCollectorGetMessage(input);
}

void ExchangeGuildTaxCollectorGetMessage::deserializeAs_ExchangeGuildTaxCollectorGetMessage(ICustomDataInput &input) {
    ObjectItemGenericQuantity _item11;
    this->_collectorNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_userNameFunc(input);
    this->_callerIdFunc(input);
    this->_callerNameFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i11 = 0; _i11 < _objectsInfosLen; _i11++) {
        _item11.deserialize(input);
        this->objectsInfos.push_back(_item11);
    }
}

void ExchangeGuildTaxCollectorGetMessage::_collectorNameFunc(ICustomDataInput &input) {
    this->collectorName = input.readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void ExchangeGuildTaxCollectorGetMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void ExchangeGuildTaxCollectorGetMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void ExchangeGuildTaxCollectorGetMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void ExchangeGuildTaxCollectorGetMessage::_userNameFunc(ICustomDataInput &input) {
    this->userName = input.readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_callerIdFunc(ICustomDataInput &input) {
    this->callerId = input.readVarUhLong();

}

void ExchangeGuildTaxCollectorGetMessage::_callerNameFunc(ICustomDataInput &input) {
    this->callerName = input.readUTF();
}

void ExchangeGuildTaxCollectorGetMessage::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readDouble();

}

void ExchangeGuildTaxCollectorGetMessage::_podsFunc(ICustomDataInput &input) {
    this->pods = input.readVarUhShort();

}

void ExchangeGuildTaxCollectorGetMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItemGenericQuantity _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

