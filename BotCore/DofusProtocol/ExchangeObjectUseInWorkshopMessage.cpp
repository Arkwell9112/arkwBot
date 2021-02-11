#include "ExchangeObjectUseInWorkshopMessage.h"

void ExchangeObjectUseInWorkshopMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectUseInWorkshopMessage(input);
}

void ExchangeObjectUseInWorkshopMessage::deserializeAs_ExchangeObjectUseInWorkshopMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ExchangeObjectUseInWorkshopMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ExchangeObjectUseInWorkshopMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarInt();
}

